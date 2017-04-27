#include <stdio.h>
#include <stdlib.h>
int power(int base, unsigned int exp) {
    int i, result = 1;
    for (i = 0; i < exp; i++)
        result *= base;
    return result;
 }
int main()
{
	printf("Enter a number: \n");
	char buffer[256];
	fgets(buffer, 256, stdin);
	int i = atoi(buffer);
	printf("Enter 2-nd number: \n");
	char bfr[256];
	fgets(bfr, 256, stdin);
	int b = atoi(bfr);
	printf("Enter mathematical action: \n");
	char action[256];
	fgets(action, 256, stdin);
	switch ((int)action[0]) {
		case '^': i = power(i, b); break;
		case '+': i = i + b; break;
		case '-': i = i - b; break;
		case '*': i = i * b; break;
		case '%': i = i % b; break;
		default: printf("Error: unknown action: %c\n", action);
	}
	printf("Integer: %d\n", i);
	return 0;
}