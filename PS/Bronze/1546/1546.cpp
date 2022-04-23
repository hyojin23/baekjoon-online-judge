#include <cstdio>

int main() {
    int n, i, a[1000], max = 0;
    double s, sum = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
        if (a[i] > max)
            max = a[i];
    }
    s = ((sum / max) * 100) / n;
    printf("%lf", s);

    return 0;
}