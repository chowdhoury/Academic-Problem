#include <stdio.h>
#include <math.h>

double Circle(double radius) {
    return 3.1416 * radius * radius;
}

double Triangle(double base, double height) {
    return 0.5 * base * height;
}

double Cylinder(double radius, double height) {
    return 2 * 3.1416 * radius * (radius + height);
}

int main() {
    int choice;
    double area;

    printf("Choose a shape to calculate area:\n");
    printf("1. Circle\n2. Triangle\n3. Cylinder\n");
    printf("Enter your choice (1, 2, or 3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            {
                double radius;
                printf("Enter the radius of the circle: ");
                scanf("%lf", &radius);
                area = Circle(radius);
                printf("Area of the circle: %.2f\n", area);
                break;
            }
        case 2:
            {
                double base, height;
                printf("Enter the base of the triangle: ");
                scanf("%lf", &base);
                printf("Enter the height of the triangle: ");
                scanf("%lf", &height);
                area = Triangle(base, height);
                printf("Area of the triangle: %.2f\n", area);
                break;
            }
        case 3:
            {
                double radius, c_height;
                printf("Enter the radius of the cylinder: ");
                scanf("%lf", &radius);
                printf("Enter the height of the cylinder: ");
                scanf("%lf", &c_height);
                area = Cylinder(radius, c_height);
                printf("Surface area of the cylinder: %.2f\n", area);
                break;
            }
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
