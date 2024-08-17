#include<stdio.h>

int main(){
    for(int i=0;i<6;i++){
        if(i==4){
            continue;
        }
        printf("%d",i);
    }
    return 0;
}