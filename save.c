#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void adds(int *list1,int i,int ii,int iii){
    int n=list1[0];
    n++;
    
    list1[n]=i;
    n++;
    list1[n]=ii;
    n++;
    list1[n]=iii;
    list1[0]=n;

}

void copys(int *list1,int *list2){
    int i=list2[0];
    int n=0;
    i++;
    for(n=0;n<i;n++)list1[n]=list2[n];


}

void printn(int *l1){
    printf("%d ,%d ,%d \n",l1[0],l1[1],l1[2]);

}
void print(int *list1){
    int i=list1[0]/3;
    int n=0;
    for(n=0;n<i;n++)printn(list1+(n*3+1));
}

void multa(int *list1,int m,int mm,int mmm,int asizes){
    int i=0;
    list1[0];
    for(i=0;i<asizes;i++)adds(list1,i*m,i*mm,i*mmm);


}
void saves(char *names,int *list1){
    FILE* f1;
    int n=list1[0]/3;
    int i=0;
    f1=fopen(names,"w");
    for(i=0;i<n;i++){
        fprintf(f1,"%d",list1[i*2+1]);
        fprintf(f1,", %d",list1[i*2+2]);
        fprintf(f1,", %d\n",list1[i*2+3]);
    }
    fclose(f1);
}


int main(){
    int i=0;
    
    int list1[4096]={0};
    printf("\033c\033[43;30m\nnumbers\n");
    
    multa(list1,5,2,1,20);
    printf("\n\n");
    print(list1) ;
    saves("data.csv",list1);
    return 0;
}
