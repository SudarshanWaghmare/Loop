// //Ques : Display this AP - 100,97,94,..upto all terms which are positive.

#include<stdio.h>
int main(){
    for(int i=100; i>0; i=i-3){
        printf("%d ", i);        
    }
    printf("\n");
    return 0;
}