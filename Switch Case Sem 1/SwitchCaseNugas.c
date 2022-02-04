#include <stdio.h>
#include <stdlib.h>

float cubecalc      (float);
float cylindercalc  (float, float, float);
float conecalc      (float, float, float);

main()

{
    float luas=0;
    int menu=0;
    int choice=0;
    float edge=0;
    float radius=0;
    float height=0;
    float phi=3.14;
    cubecalc(edge);
    choice = 1 || 2;
    printf("Welcome to Our Program\n\n");
    printf("Do You Want to Run This Calculator?\n\n");
    printf("Type 1 For Yes\n");
    printf("Type 2 For No\n");
    printf("Your Choice: ");
    scanf ("%d",&choice);
    while (choice == 1)
    {
        basabasi();
        scanf ("%d", &menu);

        switch(menu)
        {
        case 1:
            printf ("\n\nYou've chosen the menu of Cube");
            printf ("\nPlease insert the following parameter:");
            printf ("\nEdge= ");
            scanf  ("%f", &edge);
            luas = cubecalc(edge);
            printf ("Result = %.2f",luas);
            break;
        case 2:
            printf ("\n\nYou've chosen the menu of cylinder");
            printf ("\nPlease insert the following parameters:");
            printf ("\nInsert the Radius= ");
            scanf ("%f", &radius);
            printf ("\nInstert the Height= ");
            scanf ("%f", &height);
            luas = cylindercalc (radius,height,phi);
            printf("Result = %.2f",luas);
            break;
        case 3:
            printf ("\n\nYou've chosen the menu of cone");
            printf ("\nPlease insert the following parameters:");
            printf ("\n Radius= ");
            scanf  ("%f", &radius);
            printf ("\n Height= ");
            scanf  ("%f", &height);
            luas = conecalc (radius,height,phi);
            printf("Result = %.2f",luas);
            break;
        case 4:
            return 0;
            break;
        default:
            printf ("\nPilihan anda tidak terdapat di list pilihan");
        }

        if (choice != 2)
        {
            printf ("\n\nDo you want to run this calculator once again? \n choice= ");
            scanf ("%d", &choice);
            switch(choice)
                {
                    case 1: break;
                    case 2:
                        printf ("\n\nThank you for using this calculating machine:)");
                        printf ("\nHAVE A NICE DAY:)");
                        printf ("\n\n");
                        return 0;
                    default:
                        printf ("\nPilihan anda tidak terdapat di list pilihan");
                }
        }

    }

    printf ("\n\nThank you for using this calculating machine:)");
    printf ("\nHAVE A NICE DAY:)");
    printf ("\n\n");

    return luas;
}



void basabasi(void)
{
        printf ("\n\nHere's the following menu:");
        printf ("\n1. For Cube");
        printf ("\n2. Cylinder");
        printf ("\n3. C-Cone");
        printf ("\n4. EXIT");
        printf ("\n\n Your Choice: ");
}






float cubecalc(float edge)
{
    int luas2 = 0;

    luas2= pow (edge,3);

    return luas2;
}

float cylindercalc (float radius, float height, float phi)
{
    float luas3 = 0;

    luas3= phi * pow(radius, 2) * height;

    return luas3;
}

float conecalc (float radius, float height,float phi)
{
    float luas4 = 0;

    luas4= (phi * pow(radius, 2) * height) / 3;

    return luas4;
}
