#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void printn(int *l1){
    printf("%d ,%d ,%d \n",l1[0],l1[1],l1[2]);

}
int main(){
    int i=0;
    int list1[4096]={2,1,1,1};
    printf("\033c\033[43;30m\nnumbers\n");
    printn(list1+1) ;   
    return 0;
}
