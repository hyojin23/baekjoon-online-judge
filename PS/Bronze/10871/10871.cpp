#include <cstdio>

int main() {
    int n, i, x, val;
    scanf("%d %d", &n, &x);
    for (i = 0; i < n; i++) {
        scanf("%d", &val);
        if (val < x)
            printf("%d ", val);
    }
    return 0;
}