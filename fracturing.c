#include <stdio.h>
#include <math.h>

// Preprocessor directive for PI
#define PI 3.14159

// Function declarations
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();
double askForUserInput();

// Asks user for a double value and returns it
double askForUserInput() {
    double value;
    printf("Enter a value: ");
    scanf("%lf", &value);
    return value;
}

// Calculates distance between two points
double calculateDistance(double x1, double y1, double x2, double y2) {
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return distance;
}

// Calculates perimeter of a circle based on its diameter
double calculatePerimeter(double diameter) {
    double radius = diameter / 2;
    double perimeter = 2 * PI * radius;
    return perimeter;
}

// Calculates area of a circle based on its diameter
double calculateArea(double diameter) {
    double radius = diameter / 2;
    double area = PI * pow(radius, 2);
    return area;
}

// Calculates the width of a rectangle defined by two points
double calculateWidth(double x1, double y1, double x2, double y2) {
    return fabs(x2 - x1);
}

// Calculates the height of a rectangle defined by two points
double calculateHeight(double x1, double y1, double x2, double y2) {
    return fabs(y2 - y1);
}

int main() {
    double x1, y1, x2, y2;

// Asks users for x coordinates
    printf("Enter coordinates for Point #1 (x1 x2):\n");
    x1 = askForUserInput();
    x2 = askForUserInput();

// Asks user for y coordinates
    printf("Enter coordinates for Point #2 (y1 y2):\n");
    y1 = askForUserInput();
    y2 = askForUserInput();

// Calculates distance between two points
    double distance = calculateDistance(x1, y1, x2, y2);

// Calculates the perimeter and area of the circle defined by the diameter
    double perimeter = calculatePerimeter(distance);
    double area = calculateArea(distance);

// Calculates the width and height of the rectangle defined by the two points
    double width = calculateWidth(x1, y1, x2, y2);
    double height = calculateHeight(x1, y1, x2, y2);

// Prints the results
    printf("The distance between the two points is %.2f\n", distance);
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The area of the city encompassed by your request is %.2f\n", area);
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The width of the city encompassed by your request is %.2f\n", width);
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The height of the city encompassed by your request is %.2f\n", height);

    return 0;
}