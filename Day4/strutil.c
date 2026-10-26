#include "strutil.h"
#include <stdio.h>
int is_char(char c)
{
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        return 1;
    else
        return 0;
}
int is_upper_to_lower(char c1, char c2)
{
    if(is_char(c1) && is_char(c2) && ((c1 - c2 == 32 )|| (c1 -c2 == -32))) return 1;
    return 0;
}
int count_vowels(const char *s)
{
    int count = 0;
    if (NULL == s || s[0] == '\0')
    {
        return 0;
    }
    while (*s)
    {
        if (*s == 'a' || *s == 'e' || *s == 'i' || *s == 'o' || *s == 'u' ||
            *s == 'A' || *s == 'E' || *s == 'I' || *s == 'O' || *s == 'U')
        {
            count++;
        }
        s++;
    }
    return count;
}

int is_palindrome(const char *s)
{
    if (NULL == s || s[0] == '\0')
    {
        return 0;
    }

    int len = 0;
    const char *st = s;
    while (*st)
    {
        len++;
        st++;
    }
    int state = 1;
    
    for (size_t idx1 = 0, idx2 = len - 1 ; idx1 < idx2; idx1++, idx2--)
    {
        while(is_char(s[idx1]) == 0 && s[idx1] == '\0') {idx1++;}
        while(is_char(s[idx2]) == 0 && s[idx2] == '\0') {idx2--;}
        if (s[idx1] != s[idx2])
        {
            if (is_upper_to_lower(s[idx1], s[idx2]) == 1)
            {
                continue;
            }else {
                state = 0;
                return state;
            }
        }
        else
        {
        }
        // early exist guard
        
    }
    
    return state;
}
