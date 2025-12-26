#include<stdio.h>
int main() {
    int n1, n2;
    char op;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    printf("Enter an operator (+, -, , /): ");
    scanf(" %c", &op);
    switch (op) {
        case '+':
            printf("Result: %d\n", n1 + n2);
            break;
        case '-':
            printf("Result: %d\n", n1 - n2);
            break;
        case '*':
            printf("Result: %d\n", n1 * n2);
            break;
        case '/':
            if(n2 != 0) {
                printf("Result: %.2f\n", (float)n1 / n2);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
    }
    return 0;
}
