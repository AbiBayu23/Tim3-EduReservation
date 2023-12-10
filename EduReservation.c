#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int pilihanMenu,ruangan,kelas,d,f,g,sure;


      char ruang1[]= "Ruang MKB 1";
      char ruang2[]= "Ruang MKB 2";
      char ruang3[]= "Lab MKB";

      char kelas1[]= "MKB 1A";
      char kelas2[]= "MKB 1B";
      char kelas3[]= "MKB 1C";

      char tambahJam[8];
    //TAMPILAN AWAL//

    awal:
    system("cls");
    printf("=========================================================================================================\n");
    printf("\t\t\t\t        PROGRAM BOOKING KELAS \n");
    printf("\t\t\t\t  UNIVERSITAS PENDIDIKAN INDONESISA \n");
    printf("\t\t\t\t          KAMPUS PURWAKARTA \n");
    printf("=========================================================================================================\n\n");


    printf("Pilih menu dengan angka 1-4\n");
    scanf("%d",&pilihanMenu);
        switch (pilihanMenu)
        {
        case 1:

            Ruang:
            system("cls");
            printf("\nRuangan kelas yang tersedia :\n");
            printf("1. Ruang MKB 1\n");
            printf("2. Ruang MKB 2\n");
            printf("3. Ruang MKB 3\n\n");
                printf("Pilih Ruangan\n");
                scanf("%d",&ruangan);
                if (ruangan == 1)
                {
                    ruangan= ruang1;
                }
                else if (ruangan == 2){
                    ruangan=ruang2;
                }
                else if (ruangan == 3){
                    ruangan=ruang3;
                }
                else if (ruangan > 3){
                    printf("Tolong pilih ruangan yang tersedia\n");
                    goto Ruang;
                }
        }
    
}
