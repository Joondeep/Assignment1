#include <stdio.h>

int main() {
    float units, bill;

    
    printf("Enter electricity units consumed: ");
    scanf("%f", &units);

    if (units <= 100) {
        bill = units * 1.5;
        printf("Electricity Bill = ₹%.2f\n", bill);
    }
        
    else if (units <100&&units>200) {
        bill = units *2;
        printf("electricity bill=%.2f\n",bill);
    }

    else if(units <200&&units>300) {
        bill =units*3;
        printf("electricity bill=%.2f\n",bill);
    }

    else {
        bill=units*5;
        printf("electricity bill=%.2f\n",bill);
        return 0;

    }


    return 0;
}
