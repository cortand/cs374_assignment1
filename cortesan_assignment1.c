# define PI 3.14159265359
# include <stdio.h>
# include <math.h>

int main() {
    int n;                      // number of spherical segments to evaluate
    int valid_count = 0;        // number of valid set of values, initialized to 0
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
    double sum_surface_area = 0.0;
    double sum_volume = 0.0;
    double avg_surface_area;
    double avg_volume;

    while(1){
        printf("How many spherical segments you want to evaluate [2-10]?\n");
        scanf("%d", &n);

        // validate input for expected range
        if(n>=2 && n<=10){
            break;
        }
    }

    // loop for n valid sets of values
    for(int count = 1; count < n + 1; count++){
        // prompt user for spherical segments parameters
        printf("Obtaining data for spherical segment number %d\n", count);

        printf("What is the radius of the sphere (R)?\n");
        scanf("%lf", &radius);

        printf("What is the height of the top area of the spherical segment (ha)?\n");
        scanf("%lf", &height_a);

        printf("What is the height of the bottom area of the spherical segment (hb)?\n");
        scanf("%lf", &height_b);

        printf("Entered data: R = %.2f ha = %.2f hb = %.2f.\n", radius, height_a, height_b);

        // print error if radius, height_a, and height_b are not positive real values
        if(radius <= 0 || height_a <= 0 || height_b <= 0){
            printf("Invalid Input.\n");
            count--;
            continue;
        }
        // print error if ha or hb bigger than radius 
        else if(height_a > radius || height_b > radius) {
            printf("Invalid Input.\n");
            count--;
            continue;
        }
        // print error if ha is less than hb
        else if(height_a < height_b) {
            printf("Invalid Input.\n");
            count--;
            continue;
        }

        // evaluate formulas
        a = sqrt((radius * radius) - (height_a * height_a));
        b = sqrt((radius * radius) - (height_b * height_b));
        h = height_a - height_b;

        top_surface_area = PI * (a * a);
        bottom_surface_area = PI * (b*b);
        lateral_surface_area = 2 * PI * radius * h;

        total_surface_area = (top_surface_area + bottom_surface_area + lateral_surface_area);

        sphere_volume = (1.00/6.00) * PI * h * (3*(a * a) + 3*(b * b) + (h * h));

        // print the values for the output variables
        printf("Total Surface Area = %.2f Volume = %.2f.\n", total_surface_area, sphere_volume);

        // get running sum for surface area and volume averages
        sum_surface_area += total_surface_area;
        sum_volume += sphere_volume;
        valid_count ++;
    }

    printf("Total average results:\n");
    avg_surface_area = sum_surface_area / valid_count;
    avg_volume = sum_volume / valid_count;
    printf("Average Surface Area = %.2f Average Volume = %.2f.\n", avg_surface_area, avg_volume);

    return 0;
}