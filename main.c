#include <stdio.h>
#include "expat.h"

void startElement(void *userData, const char *name, const char **atts) {
    printf("START: %s\n", name);
}

void endElement(void *userData, const char *name) {
    printf("END: %s\n", name);
}

int main() {
    XML_Parser parser = XML_ParserCreate(NULL);
    XML_SetElementHandler(parser, startElement, endElement);
    char buf[1024];
    size_t len;
    while ((len = fread(buf, 1, sizeof(buf), stdin)) > 0) {
        if (XML_Parse(parser, buf, (int)len, len < sizeof(buf)) == XML_STATUS_ERROR) {
            return 1;
        }
    }
    XML_ParserFree(parser);
    return 0;
}
