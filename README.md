# 🚀 XML 核心引擎轉生挑戰賽 (C to Modern Language)

## 1. 專案背景

本專案基於全球最知名的 XML 解析庫 **Expat**。Expat 是一個採用 C 語言編寫、基於事件驅動（Stream-oriented）的解析引擎，被廣泛應用於 Mozilla、Python、PHP 等核心專案中。

這是一場考驗 **「AI Agent 協作」** 與 **「複雜 Context 管理」** 的競賽。你將面對約 **12,000 行** 密集的 C 語言代碼，你的任務是利用 AI 工具將其重構成 **Rust**。


## 2. 快速開始

### 編譯 C 語言基準版本

在參賽前，請先確保你能編譯並執行原始版本，作為你的測試基準：

```bash
./build.sh
```

### 驗證原始版本

```bash
echo '<root><node>Hello AI</node></root>' | ./expat_cli
```

---

## 3. 任務規格 (Specification)

### 目標

1. **語言**：**Rust 1.7x+**。
2. **介面**：維持純 CLI 模式，讀取 `STDIN`，輸出 `STDOUT`。
3. **輸出格式**：必須與 `expat_cli` 的標籤輸出格式 100% 一致。
* `START: tag_name`
* `END: tag_name`
* 如果有屬性，需依照 C 版順序印出 `ATTR: key = value`。
4. **refactor完build binary檔名** agent_expat_cli



### 嚴禁行為

* 禁止直接調用語言內建的高階 XML 庫（如 `encoding/xml` 或 `serde-xml`）。
* 必須保留原有的 Tokenizer、Role Parser 與 State Machine 的分層邏輯。

---

## 4. 目錄結構

* `main.c`: 題目入口程式。
* `build.sh`: 編譯指令(需要gcc)。

---

**準備好接受挑戰了嗎？讓 AI 成為你的副駕駛，帶領這套經典引擎進入現代語言的世界吧！**
