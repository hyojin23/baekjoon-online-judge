#include <cstdio>

int main() {
    int i, n, max = 0, seq;
    for (i = 1; i <= 9; i++) {
        scanf("%d", &n);
        if (n > max) {
            max = n;
            seq = i;
        }
    }
    printf("%d\n", max);
    printf("%d\n", seq);

    return 0;
}

