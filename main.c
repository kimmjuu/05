#include <stdio.h>

int main(void) {
int a, b, result;
    char op;

    printf("Enter expression (ex: 2 + 5): ");
    scanf("%d %c %d", &a, &op, &b);

    if(op == '+')
        result = a + b;
    else if(op == '-')
        result = a - b;
    else if(op == '*')
        result = a * b;
    else if(op == '/')
        result = a / b;
    else if(op == '%')
        result = a % b;
    else {
        printf("Invalid operator\n");
        return 0;
    }

    printf("%d %c %d = %d\n", a, op, b, result);
    
	return 0;
}