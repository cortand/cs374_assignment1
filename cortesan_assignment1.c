# include <stdio.h>
# include <math.h>

int main() {
    double n;          // numner of sperical segments to evaluate
    double radius; 
    double height_a;
    double height_b;

    i = 0
    
   
    while(1){
        printf("How many spherical segments you want to evaluate [2-10]?\n");

        // reprompt user if invalid input
        if (scanf("%lf", &n) !=1){
            while(getchar() != '\n');
            continue
        }

        // valid input
        if(n>=2 && n<=10){
            break;
        }
    }

}