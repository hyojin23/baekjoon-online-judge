#include <cstdio>

int main() {
    int n;
    char grade;
    scanf("%d", &n);
    if (n >= 90)
        grade = 'A';
    else if (n >= 80)
        grade = 'B';
    else if (n >= 70)
        grade = 'C';
    else if (n >= 60)
        grade = 'D';
    else
        grade = 'F';
    printf("%c", grade);
    return 0;
}