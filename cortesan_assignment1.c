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
    double volume;
    
    while(1){
        printf("How many spherical segments you want to evaluate [2-10]?\n");
        scanf("%d", &n);

        // validate input for expected range
        if(n>=2 && n<=10){
            printf("%d\n", n);
            break;
        }
    }

    // Prompt user for spherical segments parameters

    for(int count = 1; count < n + 1; count++){
        printf("Obtaining data for spherical segment number %d\n", count);

        printf("What is the radius of the sphere (R)?\n");
        scanf("%lf", &radius);
        printf("%.2f\n", radius);

        printf("What is the height of the top area of the spherical segment (ha)?\n");
        scanf("%lf", &height_a);
        printf("%.2f\n", height_a);

        printf("What is the height of the bottom area of the spherical segment (hb)?\n");
        scanf("%lf", &height_b);
        printf("%.2f\n", height_b);

        // validate radius of the sphere

        // validate height A

        // validate height B
    }


    

}