#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	printf("What type of geometry do you want to find? \n\n");
	printf("1 : Square \t\t");
	printf("2 : Rectangle \t\t");
	printf("3 : Triangle \t\t");
	printf("4 : Rhombus \n");
	printf("5 : Parallelogram \t");
	printf("6 : Kite \t\t");
	printf("7 : Trapezoid \t\t");
	printf("8 : Circle \n\n");
	printf("Please select the desired number. \n\n");
	int num;
	float num1, area1, num21, num22, area2, num31, num32, area3, num41, num42, area4, num51, num52, area5, num61, num62, area6, num71, num72, num73, area7, num81, area8;
	scanf("%d", &num);
	if (num == 1) {
		printf("\n1 : Square \n\n");
		printf("Please enter side length : ");
		scanf("\n %f", &num1);
		area1 = num1 * num1;
		printf("\narea = side length * side length \n\n");
		printf("Your square area is %.3f \n", area1);
	}
	else if (num == 2) {
		printf("\n2 : Rectangle \n\n");
		printf("Please enter length : ");
		scanf("%f", &num21);
		printf("Please enter width  : ");
		scanf("%f", &num22);
		area2 = num21 * num22;
		printf("\narea = length * width \n\n");
		printf("The area of your rectangle is %.3f \n", area2);
	}
	else if (num == 3) {
		printf("\n3 : Triangle \n\n");
		printf("Please enter the base length : ");
		scanf("%f", &num31);
		printf("Please enter height          : ");
		scanf("%f", &num32);
		area3 = 0.5 * num31 * num32;
		printf("\narea = 1/2 * base length * height \n\n");
		printf("The area of your triangle is %.3f \n", area3);
	}
	else if (num == 4) {
		printf("\n4 : Rhombus \n\n");
		printf("Please enter the length of the diagonal : ");
		scanf("%f", &num41);
		printf("Please enter the length of the diagonal : ");
		scanf("%f", &num42);
		area4 = 0.5 * (num41 * num42);
		printf("\narea = 1/2 * (length of the diagonal * length of the diagonal) \n\n");
		printf("The area of your rhombus is %.3f \n", area4);
	}
	else if (num == 5) {
		printf("\n5 : Parallelogram \n\n");
		printf("Please enter the base length : ");
		scanf("%f", &num51);
		printf("Please enter height          : ");
		scanf("%f", &num52);
		area5 = num51 * num52;
		printf("\narea = base length * height \n\n");
		printf("The area of your parallelogram is %.3f \n", area5);
	}
	else if (num == 6) {
		printf("\n6 : Kite \n\n");
		printf("Please enter the length of the diagonal : ");
		scanf("%f", &num61);
		printf("Please enter the length of the diagonal : ");
		scanf("%f", &num62);
		area6 = 0.5 * (num61 * num62);
		printf("\narea = 1/2 * (length of the diagonal * length of the diagonal) \n\n");
		printf("The area of your kite is %.3f \n", area6);
	}
	else if (num == 7) {
		printf("\n7 : Trapezoid \n\n");
		printf("Please enter the length of the parallel sides : ");
		scanf("%f", &num71);
		printf("Please enter the length of the parallel sides : ");
		scanf("%f", &num72);
		printf("Please enter height                           : ");
		scanf("%f", &num73);
		area7 = 0.5 * (num71 + num72) * num73;
		printf("\narea = 1/2 * (length of the parallel sides + length of the parallel sides) * height \n\n");
		printf("The area of your trapezoid is %.3f \n", area7);
	}
	else if (num == 8) {
		printf("\n8 : Circle \n\n");
		printf("Please enter the radius length : ");
		scanf("%f", &num81);
		area8 = pow(num81, 2) * 22 / 7;
		printf("\narea = 22/7 * (radius length * radius length) \n\n");
		printf("The area of your circle is %.3f \n", area8);
	}
}