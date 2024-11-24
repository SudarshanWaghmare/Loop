// Ques : Print all the even numbers from 1 to 100

#include<stdio.h>
int main(){
    int j=1;
    for(int i=1; i<=100; i++){
        if(i%2==0){            
            printf("%d. %d \n",j, i);
            j++;
        }
    }
    return 0;
}