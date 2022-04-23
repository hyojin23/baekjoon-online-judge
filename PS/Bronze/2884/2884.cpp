#include <cstdio>

int main() {
    int h, m;
    scanf("%d %d", &h, &m);
    if (m < 45) {
        m = m + 60 - 45;
        if (h != 0)
            h--;
        else
            h = 23;
    } else {
        m = m - 45;
    }
    printf("%d %d", h, m);
    return 0;
}
