#include <cstdio>

int main() {
    int i, n, sum = 0, res;
    for (i = 0; i < 5; i++) {
        scanf("%d", &n);
        sum += n * n;
    }
    res = sum % 10;
    printf("%d", res);
    return 0;
}
