*This project was created as part of the 42 curriculum by antgarci*
# Libft
//description
## Instructions
* To compile:
```
 make
```
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
| 🟢isalpha <div id= 'isalpha' /> | Checks for an alphabetic character |
| 🟢isdigit <div id= 'isdigit' /> | Checks for a numeric character |
| 🟢isalnum <div id= 'isalnum' /> | Checks for an alphanumeric character |
| 🟢isascii <div id= 'isascii' /> | Checks for an ASCII character |
| 🟢isprint <div id= 'isprint' /> | Checks for a printable character |
| 🟢strlen  <div id= 'strlen' /> | Returns the lenght of the string given |
| 🟢memset  <div id= 'memset' /> | Fill the first n bytes of memory |
| 🟢bzero   <div id= 'bzero' /> | Fill the first n bytes of memory with zeros |
| 🟢memcpy  <div id= 'bzero' /> | Copy the first n bytes of memory to another area **without controlling overlaping** |
| 🟢memmove <div id= 'bzero' /> | Copy the first n bytes of memory to another area **controlling the overlaping** |
| 🟢strlcpy <div id= 'strlcpy' /> | Copy up to size characters from one string into another and returns the lenght of the new string |
| 🟢strlcat <div id= 'strcat'  /> | Append up to size characters from one string into another and returns the lenght of the new string |
| 🟢toupper <div id= 'toupper' /> | Return an uppercase equivalent of the letter given *if possible* |
| 🟢tolower <div id= 'tolower' /> | Return a lowercase equivalent of the letter given *if possible* |
| 🟢strchr  <div id= 'strchr' /> | Look for the first occurrence of the character given on a string |
| 🟢strrchr <div id= 'strrchr' /> | Look for the last occurence of the character given on a string |
| 🟢strncmp <div id= 'strncmp' /> | Compare the first n bytes of two strings returning the difference between them |
| 🟢memchr  <div id= 'memchr' /> | Look for the first instance of the character given on a memory area |
| 🟢memcmp  <div id= 'memcmp' /> | Compare the first n bytes of memory of two strings returning the difference between them |
| 🟢strnstr <div id= 'strnstr' /> | Look for the first occurence of one string into another only in the first n characters |
| 🟢atoi    <div id= 'atoi' /> | Converts a part of a string into an integrer taking into account the sign before the number |
| 🟢calloc  <div id= 'calloc' /> | Allocate memory for an array of *nmemb* elements of *size* bytes each, and set the memory to zero |
| 🟢strdup  <div id= 'strdup' /> | Duplicate a string with malloc |
| 🟡 substr <div id= 'substr' /> | Creates a string from another one starting in *start* ant taking the next *len* characters |
| 🟡strjoin <div id= 'strjoin' /> | Creates a new string from appending one string into another |
| 🟡strtrim <div id= 'strtrim' /> | Create a new string removing the characters given in *set* from *s1* |
| 🟡split <div id= 'split' /> | Create an array of arrays dividing the string given *s* by the delimiter *c* |
| 🟡itoa <div id= 'itoa' /> | Create a new string with the value of the number *n* |
| 🟡strmapi <div id= 'strmapi' /> | Creates a new string applying the function *f* into every character of the string *s* |
| 🟡striteri <div id= 'striteri' /> | Apply the function *f* to every character of the string  *s* |
| 🟡putchar_fd <div id= 'putchar_fd' /> | Send the character *c* to the file descriptor *fd* |
| 🟡putstr_fd <div id= 'putstr_fd' /> | Send the string *s* to the file descriptor *fd* |
| 🟡putendl_fd <div id= 'putendl_fd' /> | Send the string *s* to the file descriptor *fd* followed by a new line |
| 🟡putnbr_fd <div id= 'putnbr_fd' /> | Send the number *n* to the file descriptor *fd* |
| 🟣 lstnew <div id= 'lstnew' /> | Create a new node with *content* as the content |
| 🟣lstadd_front <div id= 'lstadd_new' /> | Add a new node at the beggining of the list |
| 🟣lstsize <div id= 'lstsize' /> | Count the nodes inside a list |
| 🟣lstlast <div id= 'lstlast' /> | Look for the last node inside a list |
| 🟣lstadd_back <div id= 'lstadd_back' /> | Add a new node in the end of a list |
| 🟣lstdelone <div id= 'lstdelone' /> | Erase the content of a node and the node given |
| 🟣lstclear <div id= 'lstclear' /> | Erase and free the node *lst* and the following ones |
| 🟣lstiter <div id= 'lstiter' /> | Apply the function *f* on every node of the list *lst* |
| 🟣lstmap <div id= 'lstmap' /> | Creates a new list applying the function *f* on every node of the list *lst* |

