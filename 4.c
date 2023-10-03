#include <stdio.h>

int main (void)
{
    int V1, V2, T, S, S1, S2, S0;
    printf("Speed of the first car V1=");
    scanf("%d", &V1);
    printf("Speed of the second car V2=");
    scanf("%d", &V2);
    printf("Distance between cars S=");
    scanf("%d", &S);
    printf("Time T=");
    scanf("%d", &T);
    S1=T*V1;
    S2=T*V2;
    printf("Path S0=%d", S1+S+S2);
    return 0;
}