/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
int main()
{
    float radius;
    float surface_area, volume;
    float width, length, height;
    int choice;
    
    printf("\n Press 1 to calculate area and volume of sphere  \n Press 2 to calculate area and volume of cuboid \n Press 3 to calculate area and volume of cube \n Press 4 to Exit");
    printf("\n Enter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1: printf("Enter radius of the sphere : \n");
            scanf("%f", &radius);
            surface_area =  4 * (22/7) * radius * radius;
            volume = (4.0/3) * (22/7) * radius * radius * radius;
            printf("Surface area of sphere is: %.3f", surface_area);
            printf("\n Volume of sphere is : %.3f", volume);
            break;
            
    case 2: printf("Enter value of width, length & height of the cuboids:\n");
            scanf("%f%f%f", &width, &length, &height);
            surface_area = 2 *(width * length + length * height + height * width);
            volume = width * length * height;
            printf("Surface area of cuboid is: %.3f", surface_area);
            printf("\n Volume of cuboid is : %.3f", volume);
            break;
    case 3: printf("\n Enter length:");
            scanf("%d",&length);
            surface_area=6*(length*length);
            volume=length*length*length;
            printf("\n Surface area of cube: %d",surface_area);
            printf("\n Volume of cube is : %.3f", volume);
            break;
    case 4: return 0;
    default: printf("\n wrong choice");
    }
return 0;
}
