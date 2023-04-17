#include<stdio.h>

int main() {
    int num;
    printf("enter number : ");
    scanf("%d",&num);

    for (int i=1 ; i <= 10 ; i++){
        int b = num*i;
        printf("%d * %d = %d\n",num,i,b);
    }
    return 0;
}

