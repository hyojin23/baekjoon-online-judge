#include <cstdio>

int main() {
    int i, j, k, t, r[1000];
    char s[1000][21];

    scanf("%d", &t);
    for (i = 0; i < t; i++) {
        scanf("%d %s", &r[i], s[i]);
    }

    for (i = 0; i < t; i++) {
        for (j = 0; s[i][j] != '\0'; j++)
            for (k = 0; k < r[i]; k++)
                printf("%c", s[i][j]);

        printf("\n");
    }

    return 0;
}
