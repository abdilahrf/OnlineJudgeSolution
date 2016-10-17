
#include <stdio.h>
#include <stdbool.h>

int rev(int number) {
 
    int res = 0;

    while(number > 0) {
        res = res * 10 + (number % 10);
        number /= 10;
    }
 
    return res;
 
}


bool isPalindrome(int sum) {
 
    return (rev(sum)==sum);
}
 
 
int main() {
 
    int number, tc, count;
 
    scanf("%d", &tc);
 
    for (int i = 0; i < tc; i++)
    {
        scanf("%d", &number);
        count = 0;
 
        while(true) {

            number += rev(number);
            ++count;
 
            if(isPalindrome(number)){
                printf("%d %d\n", count, number);
                break;
            }
        }
 
    }
 
 
    return 0;
}