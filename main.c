#include <stdio.h>
#include <stdlib.h>

int main(void) {
	 int n;

    printf("Enter an integer: "); //한글 글씨 깨짐으로 인해  영문으로 코드 작성하였습니다
    scanf("%d", &n);           

    if (n > 0) {               
        printf("Positive\n");
    } else if (n < 0) {
        printf("Negative\n");
    } else {
        printf("Zero\n");
    }

	return 0;
}