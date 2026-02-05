#!/bin/bash
gcc -o expat_cli     main.c xmlparse.c xmltok.c xmlrole.c     -DXML_GE=1     -DXML_DTD=1     -DXML_CONTEXT_BYTES=1024     -DXML_POOR_ENTROPY     -DHAVE_MEMMOVE     -I.
