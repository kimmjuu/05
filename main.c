#include <stdio.h>

int main(void) {
    int answer = 59;
    int guess;
    int trials = 0;

    do {
        printf("Input a number: ");
        scanf("%d", &guess);
        trials++;

        if (guess > answer)
            printf("Too big!\n");
        else if (guess < answer)
            printf("Too small!\n");
        else
            printf("Correct! trials:%d\n", trials);

    } while (guess != answer);
    
	return 0;
}