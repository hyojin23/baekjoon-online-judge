#include <cstdio>

int main() {
    int i, n, a[42] = {}, cnt = 0;
    for (i = 0; i < 10; i++) {
        scanf("%d", &n);
        a[n % 42]++;
    }
    for (i = 0; i < 42; i++) {
        if (a[i] >= 1)
            cnt++;
    }
    printf("%d", cnt);
    return 0;
}