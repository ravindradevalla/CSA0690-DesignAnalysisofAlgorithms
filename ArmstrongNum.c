#include <stdio.h>
#include <math.h>
int isArmstrong(int num)
 {
    int originalNum = num;
    int sum = 0;
    int digits = 0;
    while (num != 0) 
	{
        num /= 10;
        digits++;
    }
	num = originalNum; 
    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, digits);
        num /= 10;
    }
    if (sum == originalNum) 
	{
        return 1; 
    } else {
        return 0; 
    }
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
