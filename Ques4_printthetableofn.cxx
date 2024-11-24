// HW : Print the table of 'n'. Here 'n' is a integer which user will input.

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number to which table wants to print:");
    scanf("%d", &n);
    for(int i=1; i<=10; i++){
        printf("%d\n", i*n);
    }
    return 0;
}