#include "main.h"
  2
  3 /**
  4  * _strchr - locates a character in a string
  5  *
  6  * @c: occurrence of the character
  7  *
  8  * @s: in the string
  9  *
 10  * Return: a pointer to the first occurrence of the character
 11  */
 12
 13 char *_strchr(char *s, char c)
 14 {
 15         while (*s)
 16         {
 17                 if (*s != c)
 18                         s++;
 19                 else
 20                         return (s);
 21         }
 22         if (c == '\0')
 23                 return (s);
 24
 25         return (NULL);
 26 }


