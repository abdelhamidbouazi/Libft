<!DOCTYPE html>
<html>
<head>
	<meta charset="UTF-8">
	<title>Libft Project</title>
</head>
<body>
	<h1>Libft Project</h1>

	<p>The Libft project is part of the 42 Network's curriculum, and requires students to implement their own library of basic C functions. This project contains my implementation of the functions, which I wrote from scratch.</p>

	<h2>Functions</h2>

	<p>The library contains several functions that are commonly used in C programming, including:</p>

	<ul>
		<li>ft_strlen - calculate the length of a string</li>
		<li>ft_strcpy - copy a string from source to destination</li>
		<li>ft_strdup - duplicate a string</li>
		<li>ft_memset - fill a block of memory with a value</li>
		<li>ft_bzero - set a block of memory to zero</li>
		<li>ft_memcpy - copy a block of memory from source to destination</li>
		<li>ft_memccpy - copy a block of memory until a specified character is found</li>
		<li>ft_memmove - copy a block of memory, handling overlaps correctly</li>
		<li>ft_memchr - search a block of memory for a specified character</li>
		<li>ft_memcmp - compare two blocks of memory</li>
		<li>ft_strlcpy - copy a string from source to destination, with size limit</li>
		<li>ft_strlcat - concatenate two strings, with size limit</li>
		<li>ft_strchr - find the first occurrence of a character in a string</li>
		<li>ft_strrchr - find the last occurrence of a character in a string</li>
		<li>ft_strncmp - compare two strings, up to a specified length</li>
		<li>ft_atoi - convert a string to an integer</li>
		<li>ft_isalpha - check if a character is alphabetic</li>
		<li>ft_isdigit - check if a character is a digit</li>
		<li>ft_isalnum - check if a character is alphanumeric</li>
		<li>ft_isascii - check if a character is a valid ASCII character</li>
		<li>ft_isprint - check if a character is printable</li>
		<li>ft_toupper - convert a character to uppercase</li>
		<li>ft_tolower - convert a character to lowercase</li>
		<li>ft_calloc - allocate and zero-initialize a block of memory</li>
		<li>ft_strdup - duplicate a string</li>
		<li>ft_substr - extract a substring from a string</li>
		<li>ft_strjoin - concatenate two strings</li>
		<li>ft_strtrim - trim whitespace from the beginning and end of a string</li>
		<li>ft_split - split a string into an array of substrings</li>
		<li>ft_itoa - convert an integer to a string</li>
		<li>ft_strmapi - apply a function to each character in a string</li>
		<li>ft_putchar_fd - output a character to a file descriptor</li>
		<li>ft_putstr_fd - output a string to a file descriptor</li>
		<li>ft_putendl_fd - output a string followed by a newline to a file descriptor</li>
		<li>
	<li>ft_putnbr_fd - output an integer to a file descriptor</li>
</ul>

<h2>Usage</h2>

<p>To use the library, simply clone this repository and compile the libft.a static library by running the following command in the project directory:</p>

<pre><code>make</code></pre>

<p>This will create the libft.a library file in the same directory. You can then link this library to your own C programs to use the functions.</p>

<h2>Testing</h2>

<p>The project includes a test suite to check the correctness of the functions. To run the test suite, run the following command in the project directory:</p>

<pre><code>make test</code></pre>

<p>This will compile the test program and run it with various inputs to test the library functions. Any errors or failures will be reported.</p>

<h2>Contributing</h2>

<p>If you find any bugs or issues with the library, feel free to open an issue or submit a pull request. Contributions are always welcome!</p>

<h2>License</h2>

<p>This project is licensed under the MIT License - see the <a href="LICENSE">LICENSE</a> file for details.</p>
</body>
</html>
