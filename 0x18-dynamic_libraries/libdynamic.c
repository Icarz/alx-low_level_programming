#include "main.h"
#include <unistd.h>
#include <stddef.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1, -1 on error
 */
int _putchar(char c) {
    return write(1, &c, 1);
}

/**
 * _islower - checks for lowercase character
 * @c: The character to check
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c) {
    return (c >= 'a' && c <= 'z');
}

/**
 * _isalpha - checks for alphabetic character
 * @c: The character to check
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c) {
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/**
 * _abs - computes the absolute value of an integer
 * @n: The integer
 * Return: absolute value of n
 */
int _abs(int n) {
    return (n < 0) ? -n : n;
}

/**
 * _isupper - checks for uppercase character
 * @c: The character to check
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c) {
    return (c >= 'A' && c <= 'Z');
}

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: The character to check
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c) {
    return (c >= '0' && c <= '9');
}

/**
 * _strlen - returns the length of a string
 * @s: The string
 * Return: length of the string
 */
int _strlen(char *s) {
    int len = 0;
    while (*s++) len++;
    return len;
}

/**
 * _puts - prints a string to stdout
 * @s: The string to print
 */
void _puts(char *s) {
    while (*s) {
        _putchar(*s++);
    }
}

/**
 * _strcpy - copies the string pointed to by src to dest
 * @dest: destination
 * @src: source
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src) {
    char *original_dest = dest;
    while ((*dest++ = *src++));
    return original_dest;
}

/**
 * _atoi - converts a string to an integer
 * @s: The string to convert
 * Return: the converted integer
 */
int _atoi(char *s) {
    int sign = 1, result = 0;
    while (*s == ' ') s++;
    if (*s == '-' || *s == '+') {
        sign = (*s == '-') ? -1 : 1;
        s++;
    }
    while (*s >= '0' && *s <= '9') {
        result = result * 10 + (*s - '0');
        s++;
    }
    return result * sign;
}

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src) {
    char *ptr = dest + _strlen(dest);
    while ((*ptr++ = *src++));
    return dest;
}

/**
 * _strncat - concatenates two strings with n bytes
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to concatenate
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n) {
    char *ptr = dest + _strlen(dest);
    while (n-- && (*ptr++ = *src++));
    *ptr = '\0';
    return dest;
}

/**
 * _strncpy - copies up to n bytes from src to dest
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n) {
    char *original_dest = dest;
    while (n-- && (*dest++ = *src++));
    while (n-- > 0) *dest++ = '\0';
    return original_dest;
}

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: negative if s1 < s2, positive if s1 > s2, 0 if equal
 */
int _strcmp(char *s1, char *s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to memory area
 * @b: byte to fill
 * @n: number of bytes to fill
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n) {
    char *ptr = s;
    while (n--) *ptr++ = b;
    return s;
}

/**
 * _memcpy - copies memory area
 * @dest: destination memory area
 * @src: source memory area
 * @n: number of bytes to copy
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n) {
    char *ptr = dest;
    while (n--) *ptr++ = *src++;
    return dest;
}

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character to locate
 * Return: pointer to the first occurrence of c or NULL
 */
char *_strchr(char *s, char c) {
    while (*s) {
        if (*s == c) return s;
        s++;
    }
    return NULL;
}

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: prefix to compare
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept) {
    unsigned int count = 0;
    while (*s && _strchr(accept, *s++)) count++;
    return count;
}

/**
 * _strpbrk - locates the first occurrence of any byte
 * @s: string
 * @accept: bytes to match
 * Return: pointer to the byte in s that matches one of the bytes
 */
char *_strpbrk(char *s, char *accept) {
    while (*s) {
        if (_strchr(accept, *s)) return s;
        s++;
    }
    return NULL;
}

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: pointer to the beginning of the located substring or NULL
 */
char *_strstr(char *haystack, char *needle) {
    char *h = haystack, *n = needle;
    while (*h) {
        char *start = h, *temp = n;
        while (*h && *temp && (*h == *temp)) {
            h++;
            temp++;
        }
        if (!*temp) return start;
        h = start + 1;
    }
    return NULL;
}
