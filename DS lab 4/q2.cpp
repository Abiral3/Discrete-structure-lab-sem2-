#include<stdio.h>

int powerFunction(int x, int y){
    if(y == 0){
        return 1;
    }
    else{
        return x * powerFunction(x, y - 1);
    }
}

int floorFunction(int x){
    return x / 2;
}

int recursiveModularExponentiation(int b, int n, int m){
    if(n == 0){
        return 1;
    }
    else if(n % 2 == 0){
        int temp = recursiveModularExponentiation(b, n / 2, m);
        return (temp * temp) % m;
    }
    else{
        int temp1 = recursiveModularExponentiation(b, floorFunction(n / 2), m);
        int temp2 = recursiveModularExponentiation(b, floorFunction(n / 2), m);
        return ((temp1 * temp2) % m * (b % m)) % m;
    }
}

int main(){
    int a, n, m;
    printf("Enter 3 values in the form of a^n mod m : \n");
    printf("a = ");
    scanf("%d", &a);
    printf("n = ");
    scanf("%d", &n);
    printf("m = ");
    scanf("%d", &m);
    printf("The result is : %d", recursiveModularExponentiation(a, n, m));
    
    return 0;
}

