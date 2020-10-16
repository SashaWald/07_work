//Sasha Wald
//Systems Level Programming
//HW 7
//10-15-20

#include <stdio.h>
#include <stdlib.h>

double average(int *a,int length){
    int sum = 0;
    int i;
    for (i = 0; i < length; i++){
        sum += a[i];
    }
    return ((double)(1.0* sum/length));
}

void copy (int *a, int *b, int length){
    int i;
    for (i = 0; i < length; i++){
        *(b+i) = *(a+i);
    }
}

int string_length (char *s){
    int str_length = 0;
    int i = 0;
    while (*(s+i)){
        str_length++;
        i++;
    }
    return(str_length);
}

int main(){
    //function one
    int a[10];
    int i;
    for (i = 0; i < 10; i++){
        a[i] = i;
    }
    printf("Average of a: %lf\n", average(a,10));
    
    //function two
    int b[10];
    copy(a,b,10);
    printf("Values in array B after copying: \n");
    for (i = 0; i < 10; i++){
        printf("b[%d]: %d\n",i,b[i]);
    }
    //function three
    printf("sashawald: length is %d\n", string_length("sashawald"));
    return 0;
}