/* Exercise 2-3 : Write the function htoi(s), which converts a string of hexadecimal digits (including an optional 0x or 0X) into its equivalent integer value. The allowable digits are 0 through 9, a through f, and A through F. */

#include <stdio.h>
#include <ctype.h>

int htoi(const char s[]) {
    int i, result, value;

    i = 0;
    result = 0;

    /* Check for optional "0x" or "0X" prefix */
    if (s[i] == '0') {
        ++i;
        if (s[i] == 'x' || s[i] == 'X') {
            ++i;
        }
    }

    /* Process each hexadecimal digit */
    while (s[i] != '\0') {
        if (isdigit(s[i])) {
            value = s[i] - '0';
        } else if (s[i] >= 'a' && s[i] <= 'f') {
            value = s[i] - 'a' + 10;
        } else if (s[i] >= 'A' && s[i] <= 'F') {
            value = s[i] - 'A' + 10;
        } else {
            /* Invalid character for hexadecimal number */
            break;
        }
        result = result * 16 + value;
        ++i;
    }

    return result;
}

int main() {
    /* Test cases */
    printf("0x1A3 = %d\n", htoi("0x1A3"));
    printf("0X1A3 = %d\n", htoi("0X1A3"));
    printf("1A3 = %d\n", htoi("1A3"));
    printf("7f = %d\n", htoi("7f"));
    printf("0 = %d\n", htoi("0"));

    return 0;
}

