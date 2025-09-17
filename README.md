# C-Programming Tutorial

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

### 2) Compile & run

```bash
# single file
gcc hello.c -o hello
./hello   # Windows: .\hello.exe

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

---

##✅File Structure 

C-programming_tutorial/
├── 00-setup/# compiler setup notes, VS Code tasks, make intro
├── 01-basics/                # syntax, variables, operators, I/O (printf/scanf)
├── 02-control-flow/          # if/else, switch, loops
├── 03-functions/             # declarations, definitions, prototypes, recursion
├── 04-arrays-strings/        # 1D/2D arrays, string.h functions, pitfalls
├── 05-pointers/              # & and *, pointer arithmetic, const-correctness
├── 06-structs-unions-enums/  # user-defined types, typedef, design tips
├── 07-memory/                # malloc/calloc/realloc/free, memory leaks
├── 08-file-io/               # text/binary files, buffering, error handling
├── 09-preprocessor/          # macros, guards, conditional compilation
├── 10-modular/               # headers, multi-file builds, simple makefiles
├── 11-debug-test/            # gdb basics, assert, unit-test style snippets
├── 12-practice/              # small algorithms & exercises
├── projects/                 # mini CLI tools / longer examples
└── README.md


---

##📜License & Author

This project is licensed under the MIT License. 
You are free to use, modify, and share the code for learning or personal projects.

🏡Author: Debananda Kunar

🌐Contact: debanandakuanr453@gmail.com
