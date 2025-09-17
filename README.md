# 🧿C-Programming Tutorial

A collection of **code-wise notes and practice programs** I created while learning the C language.  
It’s organized for quick revision, with small, focused examples that build up from basics to real projects.

---

## 📌 About

Hi, I’m **Debananda Kunar**.  
I started learning **C** and built this repository to document my progress and share structured notes that are easy to revisit.

**Goals:**
- Track my learning journey  
- Share concise notes with runnable examples  
- Make it beginner-friendly for quick revision  

If this helps you, feel free to use it, improve it, or contribute.  

📧 Contact: **debanandakuanr453@gmail.com**

---

## 📖 What’s Inside

This repo covers the following C topics (more will be added as I learn):

- Basics: syntax, variables, data types, operators  
- Control flow: `if/else`, `switch`, loops (`for`, `while`, `do...while`)  
- Functions & scope  
- Arrays & strings  
- Pointers (single, double), pointer arithmetic  
- Structures, unions & enums  
- Dynamic memory: `malloc`, `calloc`, `realloc`, `free`  
- File I/O: text & binary files (`fopen`, `fscanf`, `fprintf`, `fread`, `fwrite`)  
- Preprocessor: macros, `#define`, `#include`, conditional compilation  
- Modular C: headers (`.h`), multi-file programs, simple makefiles  
- Debugging & testing: `gdb`, assertions, error handling patterns  
- Practice notes & small code snippets  
- Mini projects (CLI tools, algorithms, etc.)

---

## 🛠 Prerequisites

To run the examples:

- A **C compiler** (GCC or Clang)  
- A **code editor** (VS Code recommended)  
- A **terminal** (Command Prompt/PowerShell, macOS Terminal, or any Linux shell)  

**Optional (but helpful):**
- `make` for building multi-file programs  
- `gdb` for debugging  

---

## 🚀 Getting Started

### 1) Install a compiler

- **Windows**:  
  - Install **MSYS2** → `pacman -S mingw-w64-ucrt-x86_64-gcc`  
  - Or install **TDM-GCC** / **WinLibs GCC**  
- **macOS**:  
  - Install Xcode Command Line Tools → `xcode-select --install` (includes `clang`)  
- **Linux**:  
  - Debian/Ubuntu → `sudo apt install build-essential`  
  - Fedora → `sudo dnf groupinstall "Development Tools"`  

---

## 🧪 Quick Smoke Test

Create a file named **`hello.c`**:

```c
#include <stdio.h>

// Entry point of the program
int main(void) {
    printf("Hello, C!\n");
    return 0;  // Exit code 0 means success
}

```
---
## compile
gcc hello.c -o hello

## run on Linux / macOS
./hello

## run on Windows (CMD or PowerShell)
hello.exe

---


# 📂 Project File Structure

This is the suggested folder layout for the **C-Programming Tutorial** repository.  
Each folder is organized by topic so you can easily find notes, examples, and practice programs.

```bash
C-programming_tutorial/
├── 00-setup/                 # Compiler setup notes, VS Code tasks, make intro
├── 01-basics/                # Syntax, variables, operators, I/O (printf/scanf)
├── 02-control-flow/          # if/else, switch, loops
├── 03-functions/             # Declarations, definitions, prototypes, recursion
├── 04-arrays-strings/        # 1D/2D arrays, string.h functions, pitfalls
├── 05-pointers/              # & and *, pointer arithmetic, const-correctness
├── 06-structs-unions-enums/  # User-defined types, typedef, design tips
├── 07-memory/                # malloc/calloc/realloc/free, memory leaks
├── 08-file-io/               # Text/binary files, buffering, error handling
├── 09-preprocessor/          # Macros, guards, conditional compilation
├── 10-modular/               # Headers, multi-file builds, simple makefiles
├── 11-debug-test/            # gdb basics, assert, unit-test style snippets
├── 12-practice/              # Small algorithms & exercises
├── projects/                 # Mini CLI tools / longer examples
└── README.md                 # Main documentation

```

---
## 🚀 How to Use

Follow these steps to explore and run the examples in this repository:

### 1. Clone the repository

```bash
git clone https://github.com/Debananda-Kuanr/C-programming_tutorial.git
cd C-programming_tutorial


---

## 📚 References

Some resources I personally use while learning C:

- [📖 C Reference (cppreference.com)](https://en.cppreference.com/w/c)  
- [📚 C Standard Library Reference](https://en.cppreference.com/w/c/header)  
- [📝 TutorialsPoint – C Programming](https://www.tutorialspoint.com/cprogramming/index.htm)  
- [🧑‍💻 GeeksforGeeks – C Language](https://www.geeksforgeeks.org/c-programming-language/)  
- [🎯 Programiz – Learn C](https://www.programiz.com/c-programming)  
- [⚡ GCC Compiler Documentation](https://gcc.gnu.org/onlinedocs/)  
- [🐞 GDB Debugger Manual](https://sourceware.org/gdb/current/onlinedocs/)  

👉 Pro tip: Always compile with warnings enabled for safer code:  

```bash
gcc -std=c17 -Wall -Wextra -Wpedantic filename.c -o output


---

## 📜 License

This project is licensed under the **MIT License**.  
You are free to use, modify, and share the code for learning or personal projects.

See the [LICENSE](./LICENSE) file for full details.

👨‍💻 **Author:** Debananda Kunar  
📧 **Contact:** debanandakuanr453@gmail.com

---

MIT License

Copyright (c) 2025 Debananda Kunar

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.


---

## 🖥️ Software & Tools Reference

Here are some tools I personally use and recommend for C programming:

- **[MinGW-w64](http://mingw-w64.org/)** → A popular GCC compiler for Windows.  
- **[MSYS2](https://www.msys2.org/)** → Package manager + terminal for Windows, includes GCC and other dev tools.  
- **[VS Code](https://code.visualstudio.com/)** → Lightweight and powerful code editor (cross-platform).  
- **[C/C++ Extension for VS Code](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools)** → Provides IntelliSense, debugging, and code navigation.  
- **[Code Runner](https://marketplace.visualstudio.com/items?itemName=formulahendry.code-runner)** → Run code snippets quickly in VS Code.  
- **[CodeSnap](https://marketplace.visualstudio.com/items?itemName=adpyke.codesnap)** → Create beautiful code screenshots for sharing notes.  
- **[TDM-GCC](https://jmeubank.github.io/tdm-gcc/)** → Another GCC compiler option for Windows.  
- **[Clang](https://clang.llvm.org/)** → Modern alternative to GCC, often bundled with macOS.  

---

## ⚙️ Adding MinGW to PATH (Windows)

After installing **MinGW-w64**, you need to add its `bin` folder to your system PATH so that `gcc` works in the terminal.

1. Find where MinGW is installed, e.g.:

2. Copy the full path of the `bin` folder.  

3. Open **Environment Variables**:  
- Press `Win + R`, type `sysdm.cpl`, and press Enter.  
- Go to **Advanced** → **Environment Variables**.  

4. Under **System Variables**, find **Path**, then click **Edit**.  

5. Click **New**, paste the path to the `bin` folder (e.g. `C:\MinGW\bin`).  

6. Click **OK** to save and restart your terminal (or PC if needed).  

---

### ✅ Verify Installation

Open a new **Command Prompt / PowerShell** and run:

```bash
gcc --version


gcc (MinGW.org GCC-6.3.0-1) 6.3.0

---

## 🙌 Final Words

This repository is part of my personal journey to learn and master **C programming**.  
I’ll keep updating it with new notes, examples, and small projects as I progress.  

If you’re also learning C, I hope this repo helps you:  
- Build a strong foundation  
- Practice with real examples  
- Learn step by step with clear structure  

---

## 💬 Feedback & Contribution

- Found a mistake?  
- Have a better code example?  
- Want to suggest improvements?  

👉 Contributions are always welcome!  
Feel free to **fork this repo, open an issue, or submit a pull request**.  

---

## 👨‍💻 Author

**Debananda Kunar**  
📧 Email: [debanandakuanr453@gmail.com](mailto:debanandakuanr453@gmail.com)  

---

⭐ If you find this repository helpful, don’t forget to **star it on GitHub** — it motivates me to keep learning & sharing!