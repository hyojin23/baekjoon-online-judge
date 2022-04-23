#include <cstdio>

int main() {
    int i, n, mul = 1, a[10] = {};
    for (i = 0; i < 3; i++) {
        scanf("%d", &n);
        mul *= n;
    }
    while (mul > 0) {
        a[mul % 10]++;
        mul /= 10;
    }
    for (i = 0; i < 10; i++) {
        printf("%d\n", a[i]);
    }
    return 0;
}
