*This project was created as part of the 42 curriculum by antgarci*
# Libft
In this project, I have made some of the most common functions in C99. The aim is to help me underestand them better, how they work internally and how could I implement them. In adition you could see a Makefile to compile every .c in the library.
## Instructions
* Compile:
```
 make
```
* Delete objects
```
make clean
```
* Complete delete
```
make fclean
```
* Recompile
```
make re
```

## Resources

[File decriptors guide](https://42-cursus.gitbook.io/guide/useful-tools/file-descriptors-fd)

[Linked lists theory](https://www.tutorialesprogramacionya.com/estructurasdedatos/listasenlazadasc/tema1.html)

The use of Ai on this project was to revise code I have already made and test, to help shorten some func
tions, and as a last resort in some cases.

## índice
* 🟢Part 1
	* [isalpha](#isalpha)
	* [isdigit](#isdigit)
	* [isalnum](#isdigit)
	* [isascii](#isascii)
	* [isprint](#isprint)
	* [strlen](#strlen)
	* [memset](#memset)
	* [bzero](#bzero)
	* [memcpy](#memcpy)
	* [memmove](#memmove)
	* [strlcpy](#strlcpy)
	* [strlcat](#strlcat)
	* [toupper](#toupper)
	* [tolower](#tolower)
	* [strchr](#strchr)
	* [strrchr](#strrchr)
	* [strncmp](#strncmp)
	* [memchr](#memchr)
	* [memcmp](#memcmp)
	* [strnstr](#strnstr)
	* [atoi](#atoi)
	* [calloc](#calloc)
	* [strdup](#strdup)
* 🟡Part 2
	* [substr](#substr)
	* [strjoin](#strjoin)
	* [strtrim](#strtrim)
	* [split](#split)
	* [itoa](#itoa)
	* [strmapi](#strmapi)
	* [striteri](#striteri)
	* [putchar_fd](#putchar_fd)
	* [putstr_fd](#putstr_fd)
	* [putendl_fd](#putendl_fd)
	* [putnbr_fd](#putnbr_fd)
* 🟣Part 3
	* [lstnew](#lstnew)
	* [lstadd_front](#lstadd_front)
	* [lstsize](#lstsize)
	* [lstlast](#lstlast)
	* [lstadd_back](#lstadd_back)
	* [lstdelone](#lstdelone)
	* [lstclear](#lstclear)
	* [lstiter](#lstiter)
	* [lstmap](#lstmap)

## Functions

| Function | Description |
| -------- |:-----------:|
| 🟢[isalpha](https://github.com/tonio-pkm/Libft/blob/main/ft_isalpha.c) <div id= 'isalpha' /> | Checks for an alphabetic character |
| 🟢[isdigit](https://github.com/tonio-pkm/Libft/blob/main/ft_isdigit.c) <div id= 'isdigit' /> | Checks for a numeric character |
| 🟢[isalnum](https://github.com/tonio-pkm/Libft/blob/main/ft_isalnum.c) <div id= 'isalnum' /> | Checks for an alphanumeric character |
| 🟢[isascii](https://github.com/tonio-pkm/Libft/blob/main/ft_isascii.c) <div id= 'isascii' /> | Checks for an ASCII character |
| 🟢[isprint](https://github.com/tonio-pkm/Libft/blob/main/ft_isprint.c) <div id= 'isprint' /> | Checks for a printable character |
| 🟢[strlen](https://github.com/tonio-pkm/Libft/blob/main/ft_strlen.c)  <div id= 'strlen' /> | Returns the lenght of the string given |
| 🟢[memset](https://github.com/tonio-pkm/Libft/blob/main/ft_memset.c)  <div id= 'memset' /> | Fill the first n bytes of memory |
| 🟢[bzero](https://github.com/tonio-pkm/Libft/blob/main/ft_bzero.c)   <div id= 'bzero' /> | Fill the first n bytes of memory with zeros |
| 🟢[memcpy](https://github.com/tonio-pkm/Libft/blob/main/ft_memcpy.c)  <div id= 'bzero' /> | Copy the first n bytes of memory to another area **without controlling overlaping** |
| 🟢[memmove](https://github.com/tonio-pkm/Libft/blob/main/ft_memmove.c) <div id= 'bzero' /> | Copy the first n bytes of memory to another area **controlling the overlaping** |
| 🟢[strlcpy](https://github.com/tonio-pkm/Libft/blob/main/ft_strlcpy.c) <div id= 'strlcpy' /> | Copy up to size characters from one string into another and returns the lenght of the new string |
| 🟢[strlcat](https://github.com/tonio-pkm/Libft/blob/main/ft_strlcat.c) <div id= 'strcat'  /> | Append up to size characters from one string into another and returns the lenght of the new string |
| 🟢[toupper](https://github.com/tonio-pkm/Libft/blob/main/ft_toupper.c) <div id= 'toupper' /> | Return an uppercase equivalent of the letter given *if possible* |
| 🟢[tolower](https://github.com/tonio-pkm/Libft/blob/main/ft_tolower.c) <div id= 'tolower' /> | Return a lowercase equivalent of the letter given *if possible* |
| 🟢[strchr](https://github.com/tonio-pkm/Libft/blob/main/ft_strchr.c)  <div id= 'strchr' /> | Look for the first occurrence of the character given on a string |
| 🟢[strrchr](https://github.com/tonio-pkm/Libft/blob/main/ft_strrchr.c) <div id= 'strrchr' /> | Look for the last occurence of the character given on a string |
| 🟢[strncmp](https://github.com/tonio-pkm/Libft/blob/main/ft_strncmp.c) <div id= 'strncmp' /> | Compare the first n bytes of two strings returning the difference between them |
| 🟢[memchr](https://github.com/tonio-pkm/Libft/blob/main/ft_memchr.c)  <div id= 'memchr' /> | Look for the first instance of the character given on a memory area |
| 🟢[memcmp](https://github.com/tonio-pkm/Libft/blob/main/ft_memcmp.c)  <div id= 'memcmp' /> | Compare the first n bytes of memory of two strings returning the difference between them |
| 🟢[strnstr](https://github.com/tonio-pkm/Libft/blob/main/ft_strnstr.c) <div id= 'strnstr' /> | Look for the first occurence of one string into another only in the first n characters |
| 🟢[atoi](https://github.com/tonio-pkm/Libft/blob/main/ft_atoi.c)    <div id= 'atoi' /> | Converts a part of a string into an integrer taking into account the sign before the number |
| 🟢[calloc](https://github.com/tonio-pkm/Libft/blob/main/ft_calloc.c)  <div id= 'calloc' /> | Allocate memory for an array of *nmemb* elements of *size* bytes each, and set the memory to zero |
| 🟢[strdup](https://github.com/tonio-pkm/Libft/blob/main/ft_strdup.c)  <div id= 'strdup' /> | Duplicate a string with malloc |
| 🟡[substr](https://github.com/tonio-pkm/Libft/blob/main/ft_substr.c) <div id= 'substr' /> | Creates a string from another one starting in *start* ant taking the next *len* characters |
| 🟡[strjoin](https://github.com/tonio-pkm/Libft/blob/main/ft_strjoin.c) <div id= 'strjoin' /> | Creates a new string from appending one string into another |
| 🟡[strtrim](https://github.com/tonio-pkm/Libft/blob/main/ft_strtrim.c) <div id= 'strtrim' /> | Create a new string removing the characters given in *set* from *s1* |
| 🟡[split](https://github.com/tonio-pkm/Libft/blob/main/ft_split.c) <div id= 'split' /> | Create an array of arrays dividing the string given *s* by the delimiter *c* |
| 🟡[itoa](https://github.com/tonio-pkm/Libft/blob/main/ft_itoa.c) <div id= 'itoa' /> | Create a new string with the value of the number *n* |
| 🟡[strmapi](https://github.com/tonio-pkm/Libft/blob/main/ft_strmapi.c) <div id= 'strmapi' /> | Creates a new string applying the function *f* into every character of the string *s* |
| 🟡[striteri](https://github.com/tonio-pkm/Libft/blob/main/ft_striteri.c) <div id= 'striteri' /> | Apply the function *f* to every character of the string  *s* |
| 🟡[putchar_fd](https://github.com/tonio-pkm/Libft/blob/main/ft_putchar_fd.c) <div id= 'putchar_fd' /> | Send the character *c* to the file descriptor *fd* |
| 🟡[putstr_fd](https://github.com/tonio-pkm/Libft/blob/main/ft_putstr_fd.c) <div id= 'putstr_fd' /> | Send the string *s* to the file descriptor *fd* |
| 🟡[putendl_fd](https://github.com/tonio-pkm/Libft/blob/main/ft_putendl_fd.c) <div id= 'putendl_fd' /> | Send the string *s* to the file descriptor *fd* followed by a new line |
| 🟡[putnbr_fd](https://github.com/tonio-pkm/Libft/blob/main/ft_putnbr_fd.c) <div id= 'putnbr_fd' /> | Send the number *n* to the file descriptor *fd* |
| 🟣[lstnew](https://github.com/tonio-pkm/Libft/blob/main/ft_lstnew.c) <div id= 'lstnew' /> | Create a new node with *content* as the content |
| 🟣[lstadd_front](https://github.com/tonio-pkm/Libft/blob/main/ft_lstadd_front.c) <div id= 'lstadd_new' /> | Add a new node at the beggining of the list |
| 🟣[lstsize](https://github.com/tonio-pkm/Libft/blob/main/ft_lstsize.c) <div id= 'lstsize' /> | Count the nodes inside a list |
| 🟣[lstlast](https://github.com/tonio-pkm/Libft/blob/main/ft_lstlast.c) <div id= 'lstlast' /> | Look for the last node inside a list |
| 🟣[lstadd_back](https://github.com/tonio-pkm/Libft/blob/main/ft_lstadd_back.c) <div id= 'lstadd_back' /> | Add a new node in the end of a list |
| 🟣[lstdelone](https://github.com/tonio-pkm/Libft/blob/main/ft_lstdelone.c) <div id= 'lstdelone' /> | Erase the content of a node and the node given |
| 🟣[lstclear](https://github.com/tonio-pkm/Libft/blob/main/ft_lstclear.c) <div id= 'lstclear' /> | Erase and **free** the node *lst* and the following ones |
| 🟣[lstiter](https://github.com/tonio-pkm/Libft/blob/main/ft_lstiter.c) <div id= 'lstiter' /> | Apply the function *f* on every node of the list *lst* |
| 🟣[lstmap](https://github.com/tonio-pkm/Libft/blob/main/ft_lstmap.c) <div id= 'lstmap' /> | Creates a new list applying the function *f* on every node of the list *lst* |
