#include<stdio.h>


int main(){ 
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);

    int b=0;

    for(int i=2; i<=(a-1); i++){
        if(a%i==0){
           b=1;
           break;
        }        
    }
    if(a==1){
        printf("%d is a neither Prime nor composite number", a);
    }
    else if(b==1){
        printf("Number is a composite number\n");
    }
    else{
        printf("Number is a Prime number", a);
    }
    //printf("%d is a Prime number", a);

    return 0;
}