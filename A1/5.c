#include <stdio.h>

void Accept(int iNo){
    int iCnt =0;

    for(int iCnt =1 ; iCnt <= iNo ; iCnt++){
        printf("*");
    }

    // OR
    // for(int iCnt =0 ; iCnt < iNo ; iCnt++){
    //     printf("*");
    // }
}


int main(){

    int iValue =0 ;
    iValue = 5;

    Accept(iValue);
    return 0;
}