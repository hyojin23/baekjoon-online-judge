#include <cstdio>

int main() {
    int n, i, j, score, sum;
    char s[80];
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        sum = 0, score = 0;
        scanf("%s", s);
        for (j = 0; s[j] != '\0'; j++) {
            if (s[j] == 'O') {
                score++;
                sum += score;
            } else
                score = 0;
        }
        printf("%d\n", sum);
    }
    return 0;
}
