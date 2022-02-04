#include <stdio.h>
int main()
{
    float   height;
    float   weight;
    float   bmi;
    char    name [20];

    printf ("Welcome to My BMI Program (Made By William Rayhan Harsono)");
    printf("\nNama\t\t: ");
    scanf ("%[^\n]*c",&name);

    printf("Berat (kg)\t: ");
    scanf("%f", &weight);

    printf("Tinggi (m)\t: ");
    scanf("%f", &height);

    //menjalankan rumus untuk menentukan bmi
    bmi = weight / (height * height);

    printf("\n\n");
    printf("Your Result\n");
    printf("Nama\t\t: %s\n",name);
    printf("Nilai BMI\t: %f\n", bmi);
    printf("Status\t\t: ");
    if      (bmi < 18.5)
    {
        printf("Underweight\n");
    }
    else if (bmi >= 18.5 && bmi <=24.9)
    {
        printf("Healty Weight\n");
    }
    else if (bmi >= 25 && bmi <= 29.9)
    {
        printf("Overweight\n");
    }
    else if (bmi >= 30)
    {
        printf("Obesity\n");
    }


    return 0;
}
