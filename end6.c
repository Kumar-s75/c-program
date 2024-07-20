#include <stdio.h>

int main() {
    int n;
    int maxDigit = -1;
    int maxCount = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    
    while (n > 0) {
        int digit = n % 10;
        int count = 0;
        int temp = n;

       
        while (temp > 0) {
            if (temp % 10 == digit)
                count++;
            temp /= 10;
        }

        if (count > maxCount) {
            maxDigit = digit;
            maxCount = count;
        }

        n /= 10;
    }

    printf("The digit %d occurs %d times.\n", maxDigit, maxCount);

    return 0;
}
