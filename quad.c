#include <stdio.h>
#include <math.h>
float quad(float a, float b,float c);
float main(){
    float a,b,c,d,x1,x2;
    printf("\n\t *********\n");
    printf("\t Type in 3 values for a,b and c. Type Enter after each input.\n");
    printf("\t Input a:");
    scanf("%f", &a );
    printf("\t Input b:");
    scanf("%f", &b );
    printf("\t Input c:");
    scanf("%f", &c );
    d = quad(a,b,c);
    if (d< 0){
	printf("\t\nImaginary\n");
}
	else {
	printf("\t\nReal\n");
	x1 = ((-1*b)+sqrt(d))/(2*a);
	x2 = ((-1*b)-sqrt(d))/(2*a);
			
}
    
    printf("\n\t a = %f b = %f c = %f",a,b,c);
    printf("\n\t disis %f ",d);
    printf("\n\t roots %f and %f",x1,x2);
        printf("\n\t ************* \n");
    return 0;
}
 
 
float quad (float a, float b, float c){
        float d = (b*b-4*a*c); 
        return d;
}
