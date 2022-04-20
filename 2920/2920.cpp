#include <cstdio>

int main() {
    int i, num;
    bool isAscending = true, isDescending = true;
    for (i = 1; i <= 8; i++) {
        scanf("%d", &num);
        if (isAscending && num != i)
            isAscending = false;
        if (isDescending && num != 9 - i)
            isDescending = false;
    }
    if (isAscending)
        printf("ascending");
    else if (isDescending)
        printf("descending");
    else
        printf("mixed");
    return 0;
}

