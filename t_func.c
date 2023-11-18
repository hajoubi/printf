#include "main.h"

void reverse_str(char s[])
{
        unsigned int i, len;
        char temp;

        len = _strlen(s);

        for (i = 0; i < len / 2; i++)
        {
                temp = s[i];
                s[i] = s[len - i - 1];
                s[len - i - 1] = temp;
        }
}

/**
 * _itoa - Converts an integer to a string.
 * @n: The integer to be converted.
 * @s: A character array to store the resulting string.
 *
 * Return: void.                                                                                                                                                                                                                                                               
 */                                                                                                                                                                                                                                                                            
void _itoa(long n, char s[])                                                                                                                                                                                                                                                   
{                                                                                                                                                                                                                                                                              
        long sign = n;                                                                                                                                                                                                                                                         
        unsigned int i = 0;                                                                                                                                                                                                                                                    
                                                                                                                                                                                                                                                                               
        if (sign < 0)                                                                                                                                                                                                                                                          
                n = -n;                                                                                                                                                                                                                                                        
        do {                                                                                                                                                                                                                                                                   
                s[i++] = n % 10 + '0';                                                                                                                                                                                                                                         
        } while ((n /= 10) > 0);                                                                                                                                                                                                                                               
        if (sign < 0)                                                                                                                                                                                                                                                          
                s[i++] = '-';                                                                                                                                                                                                                                                  
        s[i] = '\0';                                                                                                                                                                                                                                                           
        reverse_str(s);                                                                                                                                                                                                                                                        
}     
