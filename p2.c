/* CS100 Fall 2026 - HW3 Problem 2: Palindrome
 *
 * Read n strings and test whether each of them is a palindrome.
 * Print "Yes" / "No" on one line per string.
 * Use dynamic memory to store each input string (no fixed-size arrays).
 * Do not rename this file.
 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        size_t l;
        scanf("%zu", &l);
        char *s = malloc(l + 1);
        scanf("%s", s);
        int f = 1;
        for (size_t j = 0; j < l / 2; j++) {
            if (s[j] != s[l - 1 - j]) {
                f = 0;
                break;
            }
        }
        if (f)
            printf("Yes\n");
        else
            printf("No\n");

        free(s);
    }
    return 0;
}
