#include<stdio.h>

int main(){
    int n= 121;
    int rev;

    rev = (n%10)*100+((n/10)%10)*10+(n/100);
    if (n==rev){
        printf("palindrome number");
    }else{
        printf("not a palindrome number");
    }
    
}