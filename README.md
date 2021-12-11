# libft
The aim of this project is to code a 'C'library regrouping usual functions.

Libft (42cursus) 2021-2022

- Actual Status : finished.
- Result        : 100%
- Observations : (null)

![Capture](https://user-images.githubusercontent.com/78090806/145681344-fe0e72bf-48a8-4424-b34b-846fcdf860d2.PNG)

## 🏁 Getting Started <a name = "getting_started"></a>

### ⚙️ Prerequisites

All you need is a shell and a C compiler like `gcc` or `clang`.

### 🖥️ Installing

To compile the entire thing just clone the repo and run `make`:

```bash
$ git clone https://github.com/attia-nabil/libft.git
$ cd libft
$ make
```

This will generate a `libft.a` archive, which you can compile with
any of the example files:

```bash
$ cp examples/ft_itoa.c example.c
$ gcc -g -I ./includes example.c libft.a
$ ./a.out
```

## 🎈 Usage <a name="usage"></a>

You can call most `stdlib.h` functions as you normally would
but with the prefix `ft_`:

```c
ft_putstr("Hello, world!\n");
```


[![forthebadge](https://forthebadge.com/images/badges/made-with-c.svg)](https://forthebadge.com)
[![forthebadge](https://forthebadge.com/images/badges/built-with-love.svg)](https://forthebadge.com)

This is my libft project from the 42 cursus (1337),
need help:
nattia@student.1337.ma
