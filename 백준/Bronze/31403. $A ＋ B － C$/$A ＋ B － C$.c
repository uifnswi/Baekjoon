#include <stdio.h>
#include <stdlib.h>

int main() {
    int a,b,c;
    char str[10];
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    printf("%d\n",a+b-c);
    sprintf(str, "%d%d", a,b);
    printf("%d", atoi(str) - c);
    return 0;
}