# Libft Project

The Libft project is part of the 1337's curriculum, and requires students to implement their own library of basic C functions. This project contains my implementation of the functions, which I wrote from scratch.

## Functions

The library contains several functions that are commonly used in C programming, including:

- `ft_strlen` - calculate the length of a string
- `ft_strcpy` - copy a string from source to destination
- `ft_strdup` - duplicate a string
- `ft_memset` - fill a block of memory with a value
- `ft_bzero` - set a block of memory to zero
- `ft_memcpy` - copy a block of memory from source to destination
- `ft_memccpy` - copy a block of memory until a specified character is found
- `ft_memmove` - copy a block of memory, handling overlaps correctly
- `ft_memchr` - search a block of memory for a specified character
- `ft_memcmp` - compare two blocks of memory
- `ft_strlcpy` - copy a string from source to destination, with size limit
- `ft_strlcat` - concatenate two strings, with size limit
- `ft_strchr` - find the first occurrence of a character in a string
- `ft_strrchr` - find the last occurrence of a character in a string
- `ft_strncmp` - compare two strings, up to a specified length
- `ft_atoi` - convert a string to an integer
- `ft_isalpha` - check if a character is alphabetic
- `ft_isdigit` - check if a character is a digit
- `ft_isalnum` - check if a character is alphanumeric
- `ft_isascii` - check if a character is a valid ASCII character
- `ft_isprint` - check if a character is printable
- `ft_toupper` - convert a character to uppercase
- `ft_tolower` - convert a character to lowercase
- `ft_calloc` - allocate and zero-initialize a block of memory
- `ft_strdup` - duplicate a string
- `ft_substr` - extract a substring from a string
- `ft_strjoin` - concatenate two strings
- `ft_strtrim` - trim whitespace from the beginning and end of a string
- `ft_split` - split a string into an array of substrings
- `ft_itoa` - convert an integer to a string
- `ft_strmapi` - apply a function to each character in a string
- `ft_putchar_fd` - output a character to a file descriptor
- `ft_putstr_fd` - output a string to a file descriptor

## Usage

To use the library, simply clone this repository and compile the libft.a static library by running the following command in the project directory:

## make


This will create the `libft.a` library file in the same directory. You can then link this library to your own C programs to use the functions.

## Testing

The project includes a test suite to check the correctness of the functions. To run the test suite, run the following command in the project directory:

## make testing


This will compile the test program and run it with various inputs to test the library functions. Any errors or failures will be reported.

## Contributing

If you find any bugs or issues with the library, feel free to open an issue or submit a pull request. Contributions are always welcome!

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

