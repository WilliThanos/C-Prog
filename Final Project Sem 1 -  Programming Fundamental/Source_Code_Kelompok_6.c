#include <stdio.h>  //Pengertian Header ini adalah Standar Input Output
#include <stdlib.h> //Pengertian Header ini adalah Standard Library
#include <math.h>   //Header ini digunakan untuk penggunaan "pow" di dalam rumus bangun ruang
#include <ctype.h>  //Header ini kami gunakan untuk menggunakan toupper (guna menyingkatkan di bagian while statement)

//Kami Declare Fungsi(Modul) Pertama Kali Sebelum Main Program
float cubecalc             (float);
float cylindercalc  (float, float, float);
float conecalc      (float, float, float);
void  closing              (void);
void  color                (void);

main() //main program
{
    color(); //memanggil modul color
    //Untuk membuat terminal lebih menarik
    {
        //Declaring Variable
        float   volume =0;
        int     menu   =0;
        int     choice =0;
        float   edge   =0;
        float   radius =0;
        float   height =0;
        float   phi    =3.14;
        char    answer =0;
        char    name [20]; //Penggunaan Array guna menyimpan input Nama dari User


        printf("=================================================================================\n");
        printf("Welcome to Volume Calculator Program - Group 6\n\n");
        //Program meminta input nama dari user
        printf("Please Insert Your Name: ");
        //Program mengscan character sampai bertemu dengan Newline
        scanf ("%[^\n]*c",&name);
        //Program Say Hello kepada nama yang telah diberikan User
        printf("\nHello %s\n",name);
        printf("Do You Want to Start This Program?\n\n");
        //Program meminta input Pemilihan untuk menjalankan program (YES/NO)
        printf("Your Choice (Y/N): ");
        scanf ("%s",&choice);
        printf("=================================================================================\n");

        //Kami Menggunakan while statement untuk Menentukan Y/N (YES/NO)
        //Jika Program menerima input Y/y (Yes) maka program akan Run
        while (toupper(choice) == 'Y')
        {
                printf ("\n\n=================================================================================\n");
                //Program Menyapa user sebelum menyajikan Opsi
                printf ("Hello %s\n",name);
                //Program Menampilkan opsi untuk digunakan oleh user
                printf ("You Can Use The Options We Have Provided Below: ");
                printf ("\n1. Cube");
                printf ("\n2. Cylinder");
                printf ("\n3. C-Cone");
                printf ("\n4. EXIT");
                printf ("\n\nNote: Type the Number to Select the Option");
                //Program meminta input berupa angka opsi dari user (1,2,3,4)
                printf ("\nYour Choice: ");
                scanf  ("%d", &menu);
                printf ("=================================================================================\n");

            //Jika User memilih Opsi 1 maka user akan menjalankan Perintah/Rumus Cube
            if (menu == 1)
            {
                //Memanggil Modul rumus Cube (cubecalc)
                cubecalc(edge);
            }
            else
            {
                //Jika User memilih Opsi 2 maka user akan menjalankan Perintah/Rumus Cylinder
                if (menu == 2)
                {
                    //Memanggil Modul rumus Cylinder (cylindercalc)
                    cylindercalc(radius, height, phi);
                }
                else
                {
                    //Jika User memilih Opsi 3 maka user akan menjalankan Perintah/Rumus Cone
                    if (menu == 3)
                    {
                        //Memanggil Modul rumus Cone (conecalc)
                        conecalc(radius, height, phi);
                    }
                    else
                    {
                        //Jika User memilih Opsi 4 maka user akan menjalankan Perintah END
                        if (menu == 4)
                        {
                            //Menggunakan opsi N/n atau bisa dibilang opsi END
                            choice = 'N';
                        }
                        else
                        {
                            //Jikalau User memasukkan output diluar opsi maka akan keluar pesan ini
                            printf("\nOooops! we think you entered the wrong option");
                        }
                    }
                }
            }
            //Jika Program menerima input N maka program akan langsung END
            if (choice != 'N')
            {
                //Program Memastikan apakah user tetap ingin menggunakan program atau tidak
                color();
                printf ("\n\n=================================================================================\n");
                printf ("Do You Want to Keep Using This Program?\n");
                printf ( "Your Choice (Y/N): ");
                scanf  ("%s", &choice);
                printf ("=================================================================================\n");
            }
        }
        //Memanggil Fungsi(Modul closing)
        closing();
        system ("PAUSE");
        return volume;
    }
}


//===================================================================================================================

//Modul-Modul yang Kami buat

float   cubecalc(float edge)
{
    //Jika User memilih Opsi 1 maka user akan menjalankan Perintah/Rumus Cube

    float volume1;
    //Menjalankan Perintah dan Rumus Cube
    printf ("\n\n=================================================================================\n");
    printf ("You Have Chosen the Menu of Cube");
    printf ("\nPlease Insert The Following Parameter");
    printf ("\nEdge : ");
    scanf ("%f" ,&edge);
    //Memastikan Input dari User tidak Kurang dari 0 (Negative Number)
    if (edge < 0)
    {
    printf ("\tERROR!");
    }
        else
        {
        //Menjalankan rumus Cube
        volume1= pow (edge, 3);
        //Menampilkan Parameter yang diberikan user dan Menampilkan Hasil dari Menjalankan Rumus
        printf ("\nThe Result of The Volume Calculation from The Parameters You Provide");
        printf ("\nEdge : %2.f",edge);
        printf ("\n\nWith Result\n--> %2.f",volume1);
        printf ("\n=================================================================================\n");
        }
    printf("\n");
    //Memastikan user melihat output yang dikeluarkan baik "ERROR" atau "Result"
    //Setelah itu user bisa mengtype tombol apa saja untuk melanjutkan
    system ("PAUSE");
    return volume1;
}


float   cylindercalc (float radius, float height, float phi)
{
    //Jika User memilih Opsi 2 maka user akan menjalankan Perintah/Rumus Cylinder

    float volume2;
    //Menjalankan Perintah dan Rumus Cylinder
    printf ("\n\n=================================================================================\n");
    printf ("You Have Chosen the Menu of Cylinder");
    printf ("\nPlease insert the following parameters:");
    printf ("\nInsert the Radius\t= ");
    scanf  ("%f", &radius);
    printf ("\nInstert the Height\t= ");
    scanf ("%f",&height);
    //Memastikan Input dari User tidak Kurang dari 0 (Negative Number)
    if (radius < 0)
    {
    printf ("\tERROR!");
    }
        else
        {
        if (height < 0)
        {
                printf ("\tERROR!");
            }
            else
            {
                //Menjalankan rumus Cylinder
                volume2 = phi * (pow(radius,2) * height);
                //Menampilkan Parameter yang diberikan user dan Menampilkan Hasil dari Menjalankan Rumus
                printf ("\nThe Result of The Volume Calculation from The Parameters You Provide");
                printf ("\nRadius : %2.f",radius);
                printf ("\nHeight : %2.f",height);
                printf ("\n\nWith Result\n--> %2.f",volume2);
                printf ("\n=================================================================================\n");
            }
        }
    printf("\n");
    //Memastikan user melihat output yang dikeluarkan baik "ERROR" atau "Result"
    //Setelah itu user bisa mengtype tombol apa saja untuk melanjutkan
    system("PAUSE");
    return volume2;
}

float   conecalc (float radius, float height,float phi)
{
    //Jika User memilih Opsi 3 maka user akan menjalankan Perintah/Rumus Cone

    float volume3;
    //Menjalankan Perintah dan Rumus Cone
    printf ("\n\n=================================================================================\n");
    printf ("You Have Chosen the Menu of Cone");
    printf ("\nPlease insert the following parameters:");
    printf ("\nInsert the Radius\t= ");
    scanf  ("%f", &radius);
    printf ("\nInstert the Height\t= ");
    scanf  ("%f",&height);
    //Memastikan Input dari User tidak Kurang dari 0 (Negative Number)
    if (radius < 0)
    {
        printf ("\tERROR!");
    }
    else
    {
        if (height < 0)
        {
            printf ("\tERROR!");
        }
        else
        {
            //Menjalankan rumus Cone
            volume3 = (phi * pow(radius, 2) * height) / 3;
            //Menampilkan Parameter yang diberikan user dan Menampilkan Hasil dari Menjalankan Rumus
            printf ("\nThe Result of The Volume Calculation from The Parameters You Provide");
            printf ("\nRadius : %2.f",radius);
            printf ("\nHeight : %2.f",height);
            printf ("\n\nWith Result\n--> %2.f",volume3);
            printf ("\n=================================================================================\n");
        }
    }
    printf("\n");
    //Memastikan user melihat output yang dikeluarkan baik "ERROR" atau "Result"
    //Setelah itu user bisa mengtype tombol apa saja untuk melanjutkan
    system ("PAUSE");
    return volume3;
}


//gunanya kami Membuat closing adalah untuk mempersingkat bagian closing agar terlihat lebih Rapih
void closing (void)
{
    printf ("\n=================================================================================\n");
    printf ("\t\tThank You For Using Our Program \n");
    printf ("\t\tMade by :\n");
    printf ("\t\tEdward Nathan Samuel     (00000060182)\n");
    printf ("\t\tMuhammad Abidzar Awwalin (00000060520)\n");
    printf ("\t\tMuhammad Zaidan Fikri    (00000060117)\n");
    printf ("\t\tWilliam Rayhan Harsono   (00000061964)\n");
    printf ("\n\t\tWe Hope You Are Satisfied With Our Program");
    printf ("\n=================================================================================\n");
    printf ("\n\n");
}

//Tidak lupa kami menyajikan fitur color untuk menciptakan Rasa keindahan untuk User
void color (void)
{
    system ("COLOR 70");
}
