#include <stdio.h>

int main(){
    printf("int : %ld \n", sizeof(int));      // 4
    printf("float : %ld \n", sizeof(float));  // 4
    printf("double : %ld \n", sizeof(double));// 8
    printf("char : %ld ",sizeof(char));       // 1
    return 0;
}


/*
Format specifiers in C Lang :
%d  - Integer
%f  - Float
%c  - Charecter
%s  - String 
%u  - Unsigned Integer ( Unsigned integers are always positive )
%ld - Long Integer
*/