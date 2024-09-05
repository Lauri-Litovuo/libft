# Libft

Libft is a custom implementation of a subset of the C standard library. I developed this project as part of the Hive Helsinki curriculum to better understand the inner workings of essential C functions, memory management, and data structures. Over time, I expanded Libft by adding functions from other Hive projects such as [**ft_printf**](https://github.com/Lauri-Litovuo/printf) and [**get_next_line**](https://github.com/Lauri-Litovuo/get_next_line). Additionally, I implemented my own dynamic data structure in C, similar to vectors in C++ or Rust, for efficient and convinient data handling in future projects.

## Table of Contents
- [Overview](#overview)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Functions Implemented](#functions-implemented)
- [Bonus Features](#bonus-features)
- [Project Structure](#project-structure)
- [Contributing](#contributing)
- [License](#license)

## Overview

Libft is my implementation of key functions typically found in the C standard library (`libc`). By recreating these functions, I aimed to gain a deep understanding of how they work under the hood.

## Features

- **Recreation of Standard C Functions**: I implemented essential functions such as `memset`, `strcpy`, `strlen`, and many more to closely mimic their standard C counterparts.
- **Memory Management**: I handled memory allocation and deallocation manually using `malloc`, `free`, and custom functions like `ft_calloc`.
- **String Manipulation**: Functions to handle common string operations like copying, concatenation, and searching.
- **Linked Lists**: I implemented a simple linked list structure to manage dynamic data more efficiently and included functions to manipulate these lists.
- **Modular Design**: The library is structured to be reusable in future projects, with a focus on clean, modular, and easy-to-read code.

## Installation

To install and use **Libft**, follow these steps:

1. **Clone the repository**:
   ```bash
   git clone https://github.com/Lauri-Litovuo/libft.git
   cd libft
   ```

2. **Compile the library**:
   ```bash
   make
   ```

This will generate a `libft.a` library file, which can be linked to any C project.

## Usage

Once the library is compiled, you can include it in any C project by linking the `libft.a` file and the `libft.h` header. Here's an example of how to use Libft in your project:

1. Include the header:
   ```c
   #include "libft.h"
   ```

2. Compile your program with the library:
   ```bash
   gcc -Wall -Wextra -Werror -o your_program your_program.c -L. -lft
   ```

3. Run your program:
   ```bash
   ./your_program
   ```

## Functions Implemented

Here is a list of the main functions I implemented in Libft:

- **Memory Manipulation**: 
  - `ft_memset`, `ft_memcpy`, `ft_memccpy`, `ft_memmove`, `ft_memcmp`, `ft_bzero`, `ft_memchr`, `ft_calloc`
  
- **String Manipulation**: 
  - `ft_strlen`, `ft_strdup`, `ft_strcpy`, `ft_strncpy`, `ft_strcat`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strnstr`, `ft_strncmp`
  
- **String Conversion**: 
  - `ft_atoi`, `ft_itoa`
  
- **Character Checks and Conversion**: 
  - `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_tolower`, `ft_toupper`
  
- **Linked Lists**: 
  - `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

These functions allow for extensive manipulation of memory and strings, as well as list management.

## Bonus Features

In addition to the standard functions, I implemented several bonus features, including:

### ft_printf

I integrated **ft_printf**, which is a custom implementation of the `printf` function. This function supports formatted output, allowing for various types of data to be printed, including integers, strings, and pointers. It handles conversion specifiers such as `%d`, `%s`, `%c`, `%p`, and more. This is a versatile tool that I use in various projects to handle output formatting.

### get_next_line

I also included **get_next_line**, a function designed to read from file descriptors, one line at a time. This is particularly useful for handling user input or processing files line by line, without needing to load the entire file into memory at once. It can read from both standard input and any file descriptor, making it highly adaptable.

### Dynamic Vector Implementation

One of the most significant additions to **Libft** is a dynamic vector implementation inspired by C++'s `vector` and Rust's `Vec`. The C standard library lacks a good dynamic data structure, so I applied my own to handle dynamic arrays of elements.

**Key Features of My Dynamic Vector**:
- **Dynamic Buffer**: The vector uses a dynamic buffer that grows as needed, doubling the size of the buffer each time the memory limit is reached to minimize reallocations.
- **Generic Type Support**: The vector is designed to accept any data type, making it highly versatile. The interface mimics the behavior of vectors in other languages, allowing easy manipulation of any type of element.
- **Efficient Append**: When the buffer has remaining space, appending elements is a fast, negligible-cost operation. Reallocation only occurs when the buffer limit is reached, at which point a new buffer is allocated, and the data is copied over.
  
This vector implementation has proven useful in later projects, such as [**Minishell**](https://github.com/Lauri-Litovuo/MiniShell), for handling dynamic data structures efficiently.

## Project Structure

My project is organized as follows:

```
libft/
├── libc/                # Source code for Libft functions
├── ft_printf/           # ft_printf implementation
├── get_next_line/       # get_next_line implementation
├── vec_lib/             # Custom vector data structure implementation
├── libft.h              # Header file
├── Makefile             # Build script
└── README.md            # Project documentation
```

## Contributing

Since this project is part of my personal learning experience, I am not currently accepting contributions. However, if you find any issues or have suggestions, feel free to reach out, and I will review them.

## License

Libft is licensed under the MIT License. See the [LICENSE](LICENSE) file for more details.
