#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#define size_of_array 50
void shift_element(int* arr, int i){
    for(int j=0; j<i;j++){
        *(arr+i+1-j)=*(arr+i-j);
    }
    *(arr+1)=0;
}

void toString(int var[],int run){
   int j;
    for(j = 0 ; j < run ; j++){
        if(j == 0){
            printf("%d",*(var + j));
        }else{
            printf(",%d",*(var + j));
        }
    }
    printf("\n");
}
void insertion_sort(int* arr , int len){
    int temp,*p;
    for(int i = 1;i < len ;i++){
        p = (arr+i-1);
        int moves = 0;
        while (p != (arr-1)){
            if(*(arr+i)>*p){
                p--;
            }else{
                moves++;
                p--;
            }
        }
        temp=*(arr+i);
        shift_element((arr+i-moves-1),moves);
        *(arr+i-moves)=temp;
    }
}



int main(){
   int number;
   int arr[size_of_array];
   for (int i = 0; i < size_of_array; i++) {
     printf("enter a number:");
     scanf("%d",&number);
     *(arr+i)=number;
   }
    // char string[] = "10 9 3 6";
    insertion_sort(arr,sizeof(arr)/4);
    toString(arr,sizeof(arr)/4);
return 0;
}
