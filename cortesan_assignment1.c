# define PI 3.14159265359
# include <stdio.h>
# include <math.h>

int main() {
    int n;              // numner of sperical segments to evaluate
    double radius;
    double height_a;
    double height_b;
    double a;
    double b;
    double h;
    double top_surface_area;
    double bottom_surface_area;
    double lateral_surface_area;
    double total_surface_area;
    double sphere_volume;
    
    while(1){
        printf("How many spherical segments you want to evaluate [2-10]?\n");
        scanf("%d", &n);

        // validate input for expected range
        if(n>=2 && n<=10){
            //printf("%d\n", n);
            break;
        }
    }

    // Prompt user for spherical segments parameters

    for(int count = 1; count < n + 1; count++){
        printf("Obtaining data for spherical segment number %d\n", count);

        printf("What is the radius of the sphere (R)?\n");
        scanf("%lf", &radius);
        //printf("%.2f\n", radius);

        printf("What is the height of the top area of the spherical segment (ha)?\n");
        scanf("%lf", &height_a);
        //printf("%.2f\n", height_a);

        printf("What is the height of the bottom area of the spherical segment (hb)?\n");
        scanf("%lf", &height_b);
        //printf("%.2f\n", height_b);

        printf("Entered data: R = %.2f ha = %.2f hb = %.2f.\n", radius, height_a, height_b);

        // print error if radius, height_a, and height_b are not positive real values
        if(radius < 0 || height_a < 0 || height_b < 0){
            printf("Invalid Input.\n");
            count--;
        }
        // print error if ha or hb bigger than radius 
        else if(height_a > radius || height_b > radius) {
            printf("Invalid Input.\n");
            count--;
        }
        // print error if ha is less than or equal to hb
        else if(height_a < height_b) {
            printf("Invalid Input.\n");
            count--;
        }

        // evaluate formulas
        a = sqrt((radius * radius) - (height_a * height_a));
        printf("%.2f\n", a);

        b = sqrt((radius * radius) - (height_b * height_b));

        h = height_a - height_b;
        printf("%.2f\n", b);

        top_surface_area = PI * (a * a);
        printf("%.2f\n", top_surface_area);

        bottom_surface_area = PI * (b*b);
        printf("%.2f\n", bottom_surface_area);

        lateral_surface_area = 2 * PI * radius * h;
        printf("%.2f\n", lateral_surface_area);

        total_surface_area = (top_surface_area + bottom_surface_area + lateral_surface_area);
        printf("%.2f\n", total_surface_area);

        sphere_volume = (1.00/6.00) * PI * h * (3*(a * a) + 3*(b * b) + (h * h));
         printf("%.2f\n", sphere_volume);

        // print the values for the output variables
        printf("Total Surface Area = %.2f Volume = %.2f\n", total_surface_area, sphere_volume);
    }
}