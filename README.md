# 🔨 Database Systems From Scratch

A structured 18-month roadmap to build a database from scratch in C, while learning
systems programming, compilers, operating systems, and networking.

---

## 📅 Timeline

### Months 1–3: C Foundations
- [ ] Data structures (linked list, stack, queue, hash table)
- [ ] Memory allocator (`malloc`/`free` clone)
- [ ] Reverse Polish Notation (RPN) calculator

### Months 4–6: Files & Persistence
- [ ] Log-structured file store
- [ ] Tiny filesystem in a file

### Months 7–8: Nand2Tetris (Hardware → OS Journey)
- [ ] Build logic gates → ALU → CPU
- [ ] Implement assembler
- [ ] Write a virtual machine (VM)
- [ ] Build a Jack language compiler
- [ ] Implement a mini operating system on Hack computer

### Months 9–11: Parsing & Compilers
- [ ] Arithmetic parser (recursive descent)
- [ ] Mini language interpreter
- [ ] Command-line shell
- [ ] **Crafting Interpreters (Part II – Bytecode VM in C)**
  - [ ] Implement VM execution model
  - [ ] Bytecode format
  - [ ] Garbage collection
  - [ ] Optimizations

### Months 12–14: Indexing & Transactions
- [ ] B-Tree
- [ ] Skip List / Trie (optional)
- [ ] Write-Ahead Log (WAL) simulator
- [ ] Bank account transaction simulator

### Months 15–16: Networking
- [ ] TCP echo server
- [ ] Key-Value store over TCP
- [ ] Multi-client chat server

### Months 17–18: Database Project 🎯
- [ ] Toy database (SQLite-lite)
  - [ ] `INSERT` and `SELECT`
  - [ ] Disk-backed pages
  - [ ] B-Tree indexing
  - [ ] WAL logging
  - [ ] SQL-like parser
  - [ ] TCP client/server interface
- [ ] **Writing a C Compiler (Nora Sandler)**
  - [ ] Lexer & parser for C subset
  - [ ] AST → x86 codegen
  - [ ] Stack frames & registers
  - [ ] Executable output

---

## 📚 Resources

- **C Programming:**  
  - K.N. King – *C Programming: A Modern Approach*  
  - K&R – *The C Programming Language*  
  - CS:APP – *Computer Systems: A Programmer’s Perspective*

- **Operating Systems:**  
  - *Operating Systems: Three Easy Pieces (OSTEP)*  
  - *The Little Book about OS Development*  

- **Compilers:**  
  - *Crafting Interpreters* – Robert Nystrom  
  - *Writing a C Compiler* – Nora Sandler  
  - *Engineering a Compiler* – Aho, Lam, Sethi, Ullman  
  - [Ruslan Spivak – Let’s Build a Simple Interpreter](https://ruslanspivak.com/lsbasi-part1/)  

- **Hardware to OS (Nand2Tetris):**  
  - [The Elements of Computing Systems](https://www.nand2tetris.org/)  
  - Nand2Tetris Coursera course (Part I & II)  

- **Databases:**  
  - [cstack – Build Your Own Database](https://cstack.github.io/db_tutorial/)  
  - CMU 15-445 Database Systems lectures  
  - SQLite documentation  

- **Networking:**  
  - [Beej’s Guide to Network Programming](https://beej.us/guide/bgnet/)  

---

## 🚀 Goal

At the end of this roadmap, you will have:
- Strong foundations in **C, OS, compilers, networking, databases, and even hardware**
- A working **toy relational database** (SQLite-lite) written from scratch
- A portfolio of projects to demonstrate **systems-level engineering skills**
- Hands-on experience with:
  - **Interpreters (Crafting Interpreters)**  
  - **Compilers & codegen (Nora Sandler)**  
  - **Hardware → OS stack (Nand2Tetris)**
