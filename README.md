# Binary Trees Project

## Introduction

Welcome to the Binary Trees project! In this project, we will be exploring the concept of binary trees, understanding their differences from Binary Search Trees, and delving into various properties and traversal methods of binary trees.

## Team Members

- Opeyemi Emmanuel
- Roseline Dangazela

## Learning Objectives

By the end of this project, we aim to achieve the following learning objectives:

### General

- Understand the concept of a binary tree.
- Differentiate between a binary tree and a Binary Search Tree.
- Grasp the potential time complexity advantages of binary trees over linked lists.
- Define and explain the terms depth, height, and size of a binary tree.
- Explore different traversal methods to navigate through a binary tree.
- Understand the characteristics of complete, full, perfect, and balanced binary trees.

### General

- Editors: vi, vim, emacs
- Compilation: Ubuntu 20.04 LTS using gcc with options -Wall -Werror -Wextra -pedantic -std=gnu89
- Files should end with a new line
- A mandatory README.md file should be present at the root of the project folder.
- Code should follow the Betty style, and its compliance will be checked using `betty-style.pl` and `betty-doc.pl`.
- Avoid using global variables.
- Each file should contain no more than 5 functions.
- The standard library is permitted.
- The prototypes of all functions should be included in the header file named `binary_trees.h`.
- Don't forget to push your header file.
- Include guards should be present in all header files.
- You don't need to push the `main.c` files used for testing to your repository.


### Binary Search Tree
```c
typedef struct binary_tree_s bst_t;
```

### AVL Tree
```c
typedef struct binary_tree_s avl_t;
```

### Max Binary Heap
```c
typedef struct binary_tree_s heap_t;
