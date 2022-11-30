/* Program   : driverListCircular.c */
/* Deskripsi : file DRIVER modul List Circular */
/* NIM/Nama  : Aprilyanto Setiyawan Siburian/24060121120022*/
/* Tanggal   : 25 November 2022*/


#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main(){
/*Kamus*/
    List Browser;
    address P1, P2, P3;
    infotype A = "onlinegdb.com", B = "vidio.com/categories/282-world-cup";

/*Algoritma*/

    printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("||||||||||||||||PROGRAM REPRESENTASI BROWSER||||||||||||||||||\n");

    //Create List dan List Empty
    printf("\nList Browser**********************\n");
    CreateList(&Browser);
    printf("ListEmpty = %d\n", ListEmpty(Browser));
    printf("\nList Browser masih kosong");


    //Insert alamat
    printf("\n\n======\tInsert Alamat Ketiga\t======\n");
    // P = Alokasi(C);
    // // InsertLast(&Browser, P);
    // // PrintInfo(Browser);
    // // printf("Info P = %s", info(P));

    //Insert alamat
    printf("\n\n======\tInsert Alamat Kedua\t======\n");
    P1 = Alokasi(A);
    InsertFirst(&Browser, P1);
    PrintInfo(Browser);
    printf("Info P1 = %s", info(P1));

    //Insert alamat
    printf("\n\n======\tInsert Alamat Pertama\t======\n");
    P2 = Alokasi(B);
    InsertFirst(&Browser, P2);
    PrintInfo(Browser);
    printf("Info P2 = %s", info(P2));

    printf("\nAlamat setelah alamat kedua = %s", info(next(P2)));

    // Insert alamat
    // printf("\n\n======\tInsert Alamat Pertama\t======\n");
    // AB = "fifa.com";
    // P3 = Alokasi(AB);
    // InsertFirst(&Browser, P3);
    // PrintInfo(Browser);
    // printf("Info P3 = %s", info(P3));

    // printf("ListEmpty = %d\n", ListEmpty(Browser));
    // printf("\n======\tInsert First\t======\n");
    // P2 = Alokasi(22);
    // InsertFirst(&Browser, P2);
    // PrintInfo(Browser);
    // printf("\n======\tInsert First\t======\n");
    // P3 = Alokasi(23);
    // InsertFirst(&Browser, P3);
    // PrintInfo(Browser);
    // printf("\n======\tInsert After\t======\n");
    // P4 = Alokasi(24);
    // Prec1 = First(Browser);
    // InsertAfter(&Browser, P4, Prec1);
    // PrintInfo(Browser);
    // printf("\n======\tInsert Last\t======\n");
    // P5 = Alokasi(25);
    // InsertLast(&Browser, P5);
    // PrintInfo(Browser);
    // printf("Jumlah elemen = %d\n", NbElmt(Browser));

    // //delete berdasarkan alamat
    // printf("\n======\tDelete First\t======\n");
    // DelFirst(&Browser, &P);
    // printf("Nilai yang dihapus = %d\n", info(P));
    // PrintInfo(Browser);
    // printf("\n======\tDelete Last\t======\n");
    // DelLast(&Browser, &Last);
    // printf("Nilai yang dihapus = %d\n", info(Last));
    // PrintInfo(Browser);
    // printf("\n======\tDelete After\t======\n");
    // Prec1 = First(Browser);
    // DelAfter(&Browser, &P, Prec1);
    // printf("Nilai yang dihapus = %d\n", info(P));
    // PrintInfo(Browser);

//     printf("\n====== Berdasarkan Nilai ======\n");
//     //Create List dan List Empty
//     printf("\nList N\t**********************\n");
//     CreateList(&N);
//     printf("ListEmpty = %d\n", ListEmpty(N));

//     //insert berdasarkan nilai
//     printf("\n======\tInsert V First\t======\n");
//     InsVFirst(&N, 10);
//     printf("ListEmpty = %d\n", ListEmpty(N));
//     PrintInfo(N);
//     printf("\n======\tDelete V First\t======\n");
//     DelVFirst(&N, &X);
//     printf("Nilai yang dihapus = %d\n", X);
//     PrintInfo(N);
//     printf("\n======\tInsert V First\t======\n");
//     InsVFirst(&N, 9);
//     PrintInfo(N);
//     printf("\n======\tInsert V First\t======\n");
//     InsVFirst(&N, 8);
//     PrintInfo(N);
//     printf("\n======\tInsert V Last\t======\n");
//     InsVLast(&N, 7);
//     PrintInfo(N);
//     printf("\n======\tInsert V After\t======\n");
//     InsVAfter(&N, 6);
//     PrintInfo(N);
//     printf("Jumlah elemen = %d\n", NbElmt(N));

//     //delete berdasarkan nilai
//     printf("\n======\tDelete V First\t======\n");
//     DelVFirst(&N, &X);
//     printf("Nilai yang dihapus = %d\n", X);
//     PrintInfo(N);
//     printf("\n======\tDelete V Last\t======\n");
//     DelVLast(&N, &X);
//     printf("Nilai yang dihapus = %d\n", X);
//     PrintInfo(N);
//     printf("\n======\tDelete V After\t======\n");
//     DelVAfter(&N, &X, 9);
//     printf("Nilai yang dihapus = %d\n", X);
//     PrintInfo(N);

    return 0;
}

