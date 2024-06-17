#include <stdio.h>

typedef struct point
{
    int x;
    int y;

} P;

P readpoint()
{
    P a;
    printf("Enter the value of x and y coordinate = ");
    scanf("%d %d", &a.x, &a.y);
    return a;
}
void writepoint(P a)
{
    printf("(%d,%d)", a.x, a.y);
}
int main()
{
    P p1, p2, p3;
    p1 = readpoint();
        p2 = readpoint();
            p3 = readpoint();
                writepoint(p1);
                writepoint(p2);
                writepoint(p3);
}