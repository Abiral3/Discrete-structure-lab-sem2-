#include<stdio.h>

int recursionfunction(int x, int y){
    if(y == 0){
        return 1;
    }
    else{
        return x * recursionfunction(x, y - 1);
    }
}

int main(){
    int a, n;
    printf("Enter 2 values in the form of a^n : \n");
    printf("a = ");
    scanf("%d", &a);
    printf("n = ");
    scanf("%d", &n);
    printf("The result is : %d", recursionfunction(a, n));
    return 0;
}

