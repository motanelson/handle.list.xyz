#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void printn(int *l1){
    printf("%d ,%d ,%d \n",l1[0],l1[1],l1[2]);

}
void print(int *list1){
    int i=list1[0]/3;
    int n=0;
    for(n=0;n<i;n++)printn(list1+(n*3+1));
}

int main(){
    int i=0;
    int list1[4096]={27,1,1,1,2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,9,9,9};
    printf("\033c\033[43;30m\nnumbers\n");
    print(list1) ;   
    return 0;
}
