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
//take user inputs for the calculator 
	printf("Enter first number: ");
	scanf("%f", &x);
// tell the calculator what function to use 
	printf("Enter operator (+, -, *, /): ");
	scanf(" %c", &operator);
	printf("Enter second number: ");
	scanf("%f", &y);
// use the char to determine what function were using and then return the value 
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
		//check for divide by zero then divide 
		if (y != 0) {
			printf("%.2f / %.2f = %.2f\n", x, y, divide(x, y));
		}
			// else statement for if y == 0 
		else {
			printf("Error: Division by zero is not allowed.\n");
	// make sure that the user gave a valid operator		
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
