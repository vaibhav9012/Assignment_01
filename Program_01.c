// WAP to find the area & perimeter of a rectangle
#include<stdio.h>
int main(){
    int length, width, Area, Perimeter;
    printf("Enter the length of rectangle: ");
    scanf("%d", &length);
    printf("Enter the width of rectangle: ");
    scanf("%d", &width);

    // area of rectangle formula
    Area = length * width;
    printf("The area of rectangle: %d\n", Area);
    // perimeter of a rectangle
    Perimeter = 2*(length+width);
    printf("Enter the perimeter of rectangle: %d", Perimeter);
    return 0;
}
