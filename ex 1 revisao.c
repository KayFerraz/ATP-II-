#include<stdio.h>
#include<math.h>


int main() {
   double catetoum, catetodois, hip;
    printf("Digite o numero do primeiro cateto:");
    scanf ("%lf",&catetoum);
    printf("Digite o numero do segundo cateto:");
    scanf ("%lf",&catetodois);

 hip = sqrt( pow(catetoum, 2) + pow(catetodois, 2));
 printf("O resultado e: %lf",hip);


 return 0;
}
