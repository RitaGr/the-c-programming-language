/* Exercise 1-21 : Write a program entab that replaces strings of blanks by the minimum number of tabs and blanks to achieve the same spacing. Use the same tab stops as for detab. When either a tab or a single blank would suffice to reach a tab stop, which should be given preference? */

/* 
A tab ('\t') should be preferred when it can reach the next tab stop because it represents a single character and aligns more efficiently.
When a single space (' ') can suffice to reach the next tab stop, it should be preferred over a tab because it also counts as a single character. 
*/

#include <stdio.h>
#define N 8

void entab(void);

int main()
{
    entab();
    return 0;
}

void entab()
{
    int c, count, pos;
    count = 0;
    pos = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            ++count;
            ++pos;
            if (pos % N == 0)
            {
                putchar('\t');
                count = 0;
            }
        }
        else
        {
            while (count > 0)
            {
                if (pos % N == 0)
                {
                    putchar('\t');
                    count = 0;
                }
                else
                {
                    putchar(' ');
                    --count;
                }
                pos++;
            }
            putchar(c);
            ++pos;

            if (c == '\n')
            {
                pos = 0;
            }
        }
    }

    while (count > 0)
    {
        if (pos % N == 0)
        {
            putchar('\t');
            count = 0;
        }
        else
        {
            putchar(' ');
            --count;
        }
        pos++;
    }
}

