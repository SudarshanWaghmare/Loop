// HW : Display this AP - 4,7,10,13,16.. upto 'n' terms. Without maths

#include<stdio.h>
int main(){
    int n;
    printf("Enter the nth term:");
    scanf("%d", &n);
    int a=4;
    for(int i=1; i<=n; i++){
        printf("%d ", a);
        a=a+3;
    }
    printf("\n");
    return 0;
}