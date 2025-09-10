#include <stdio.h>
int main() {
    int a,b;
    int *ptr=&a;
    int *ptr1=&b;
    printf("Enter values:");
    scanf("%d %d",&a,&b);
    int sum=*ptr+*ptr1;
    printf("Sum:%u",sum);
    return 0;
}
