// header files and function prototypes
#include <stdio.h>\
float add(float x, float y);
float subtract(float x, float y);
float multiply(float x, float y);
float divide(float x, float y);
// Main function / user interface 
 main() {
float x, y;
	char operator;
	printf("Enter first number: ");
	scanf("%f", &x);
	printf("Enter operator (+, -, *, /): ");
	scanf(" %c", &operator);
	printf("Enter second number: ");
	scanf("%f", &y);

	switch (operator) {
	case '+':
		printf("%.2f + %.2f = %.2f\n", x, y, add(x, y));
		break;
	case '-':
		printf("%.2f - %.2f = %.2f\n", x, y, subtract(x, y));
		break;
	case '*':
		printf("%.2f * %.2f = %.2f\n", x, y, multiply(x, y));
		break;
	case '/':
		printf("%.2f / %.2f = %.2f\n", x, y, divide(x, y));
	default:
		printf("Error: Invalid operator.\n");
	}
	return 0;

}
// calculator functions
float add(float x, float y) {
	int ans = x + y;
	return ans;
}
float subtract(float x, float y); {
	int ans = x - y;
	return ans; 
}
float multiply(float x, float y); {
	int ans = x * y;
	return ans;
}
float divide(float x, float y); {
	int ans = x / y;
	return ans;
}
