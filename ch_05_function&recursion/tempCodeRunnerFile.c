#include<stdio.h>
int fabonaaci(int i,int count, int next_term, int first_term, int second_term);


int main(){
    int n,next_term,i;

    printf("enter the number of terms\n");
    scanf("%d",&n);


    printf ("the fabonacci number upto %d term is :\n",n);
