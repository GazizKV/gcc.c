#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[])
{
	char* plus = "+";
	char* minus = "-";
	char* didgital = "*";
	char* divid = "/";
	float first_digit, second_digit, result;
	char* sign;
	printf("Please enter the first digit\n");
	scanf("%f", &first_digit);
	printf("Please enter the secind digit\n");
	scanf("%f", &second_digit);
	printf("Please enter + or - or * or /\n");
	scanf("%s", sign);
	printf("%f %f %s\n", first_digit, second_digit, sign);
	if (*plus == *sign)
	{
		result = first_digit+second_digit;
		printf("check the station plus %f\n", result);
	}
	if (*minus == *sign)
	{
		result = first_digit-second_digit;
		printf("check the station minus %f\n", result);
	}
	if (*didgital == *sign)
	{
		result = first_digit*second_digit;
		printf("check the station times %f\n", result);
	}
	if (*divid == *sign)
	{
		result = first_digit/second_digit;
		printf("check the station divide %f\n", result);
	}
	printf("%f %s %f = %f\n", first_digit, sign ,second_digit, result);
	return 0;
}
