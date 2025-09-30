#include <stdio.h>
#include <stdlib.h>

int main(void) {
 int x;

    printf("Enter an integer: ");
    scanf("%d", &x);

    if (x < 0) {
        x = -x;
    }

    printf("The absolute value is %d\n", x);
    
	return 0;
}