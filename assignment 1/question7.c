#include <stdio.h>

int main() {
    float bs=2000;
    float da,ta,hra,total;

    if (bs<=5000)
    {
        da=bs*0.10;
        ta=bs*0.20;
        hra=bs*025;


    }else{
        da=bs*0.15;
        ta=bs*0.25;
        hra=bs*030;
    }
    total= bs+da+ta+hra;
    printf("total salary %f",total);
    
}