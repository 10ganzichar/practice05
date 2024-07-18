#include <stdio.h>

int n;
char plans[100];
int x = 1, y = 1;

// L, R, U, D에 따른 이동 방향
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
char moveTypes[4] = {'L', 'R', 'U', 'D'};

int main()
{
    scanf("%d", &n);
    scanf("%s", plans);

    for (int i = 0; plans[i] != '\0'; i++)
    {
        char plan = plans[i];

        int nx = -1, ny = -1;
        for (int j = 0; j < 4; j++) {
            if (plan == moveTypes[j]) {
                nx = x + dx[j];
                ny = y + dy[j];
            }
        }
        if (nx < 1 || ny < 1 || nx > n || ny > n)
            continue;
        x = nx;
        y = ny;
    }
    printf("(%d,%d)", x, y);
}