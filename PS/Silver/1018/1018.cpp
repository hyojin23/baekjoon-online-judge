#include <cstdio>

int main() {
    int n, m, i, j, x, y, t, cnt, rt, bt, min = 65;
    char b[50][50] = {}, tmp;
    scanf("%d %d", &n, &m);

    for (i = 0; i < n; i++) {
        scanf("%s", b[i]);
    }

    bt = n - 8 + 1; // Move to the right
    rt = m - 8 + 1; // Move to the bottom
    for (x = 0; x < bt; x++) {
        for (y = 0; y < rt; y++) {
            // When top left color is W and B
            for (t = 0; t < 2; t++) {
                cnt = 0;
                if (t == 0)
                    tmp = 'W';
                else
                    tmp = 'B';
                // Find wrong color in 8*8 chess board
                for (i = x; i < x + 8; i++) {
                    for (j = y; j < y + 8; j++) {
                        if (b[i][j] != tmp)
                            cnt++;
                        if (tmp == 'W' && j != y + 7)
                            tmp = 'B';
                        else if (tmp == 'B' && j != y + 7)
                            tmp = 'W';
                    }
                }
                if (cnt < min)
                    min = cnt;
            }
        }
    }
    printf("%d", min);

    return 0;
}
