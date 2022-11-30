/* Program   : listLinier.c */
/* Deskripsi : file BODY modul List Linear */
/* NIM/Nama  : Aprilyanto Setiyawan Siburian/24060121120022*/
/* Tanggal   : 25 November 2022*/

#ifndef listgandaNoLast_C
#define listgandaNoLast_C

#include <stdio.h>
#include <stdlib.h>
#include "list.h"

/*Prototype*/
/* ----- Test List Kosong ----- */
/* Mengirim true jika list kosong */
boolean ListEmpty (List L){
/*Kamus Lokal*/

/*Algoritma*/
    return First(L) == Nil;
}

/* ----- Pembuatan List Kosong ----- */
/* I.S.		: sembarang
   F.S.		: Terbentuk list kosong */
void CreateList (List *L){
/*Kamus Lokal*/

/*Algoritma*/
    //First(*L) = Nil;
}

/* ----- Manajemen Memori ----- */
/* Mengirimkan address hasil alokasi sebuah elemen */
/* Jika alokasi berhasil, maka address tidak Nil,
   dan misalnya menghasilkan P, maka
   Info(P) = X, Next(P) = Nil
   Jika alokasi gagal, mengirimkan Nil */
address Alokasi (infotype X){
/*Kamus Lokal*/
    address P;

/*Algoritma*/
    P = (address) malloc(sizeof(ElmtList));
    if(P != Nil){
        info(P) = X;
        next(P) = Nil;
    }
    return P;
}

/* I.S.		: P terdefinisi
  F.S.		: P dikembalikan ke sistem
  Melakukan dealokasi/pengembalian address P */
void Dealokasi (address *P){
/*Kamus Lokal*/

/*Algoritma*/
    free(*P);
}

/*mencari alamat elemen terakhir dan sebelumnya*/
void AdrLast(List L, address *Prec, address *Last){
/*Kamus Lokal*/

/*Algoritma*/
    *Prec = Nil;
    *Last = Nil;
    if(!ListEmpty(L)){
        *Last = First(L);
        while(next(*Last) != Nil){
            *Prec = *Last;
            *Last = next(*Last);
        }
    }
}

/* ----- Primitif Berdasarkan Alamat ------ */
/* Penambahan Elemen Berdasarkan Alamat */
/* I.S. 	: Sembarang, P sudah dialokasi
    F.S.		: Menambahkan elemen ber-address P sebagai elemen pertama */
void InsertFirst (List *L, address P){
/*Kamus Lokal*/

/*Algoritma*/
    next(P) = First(*L);
    prev(P) = Nil;
    if(!ListEmpty(*L)){
        prev(First(*L)) = P;
    }
    First(*L) = P;
}

/* I.S.		: Prec pastilah elemen list dan bukan elemen terakhir,
			  P sudah dialokasi
    F.S. 	: Insert P sebagai elemen sesudah elemen beralamat Prec */
void InsertAfter (List *L, address P, address Prec){
/*Kamus Lokal*/

/*Algoritma*/
    if(First(*L) == Nil){
		InsertFirst(&(*L),P);
	}
	else{
		next(P) = next(Prec);
		next(Prec) = P;
		prev(P) = Prec;
		prev(next(Prec)) = P;
	}
}

/* I.S.		: Sembarang, P sudah dialokasi
    F.S.		: P ditambahkan sebagai elemen terakhir yang baru */
void InsertLast (List *L, address P){
/*Kamus Lokal*/
    address last;

/*Algoritma*/
    next(P) = Nil;
	last = First(*L);
	if(First(*L) == Nil){
		InsertFirst(&(*L), P);
	}
	else{
		while(next(last) != Nil){
			last = next(last);
		}
		next(last) = P;
		prev(P) = last;
	}
}

// /* Penghapusan Sebuah Elemen */
// /* I.S.     : List tidak kosong
//    F.S.     : P adalah alamat elemen pertama list sebelum penghapusan
//               Elemen list berkurang satu (mungkin menjadi kosong)
//               First element yang baru adalah suksesor elemen pertama yang
//               lama */
// void DelFirst (List *L, address *P){
// /*Kamus Lokal*/

// /*Algoritma*/
//     *P = First(*L);
//     First(*L) = next(*P);
//     next(*P) = Nil;
//     if(!ListEmpty(*L)){
//         prev(First(*L)) = Nil;
//     }
// }

// /* I.S.     : List tidak kosong
//    F.S.     : P adalah alamat elemen terakhir list sebelum penghapusan
//               Elemen list berkurang satu (mungkin menjadi kosong)
//               Last element baru adalah predesesor elemen pertama yang
//               lama, jika ada */
// void DelLast (List *L, address *P){
// /*Kamus Lokal*/
//     address prec, last;

// /*Algoritma*/
//     last = First(*L);
// 	prec = prev(last);
//     if(next(First(*L)) == Nil){
//         First(*L) = Nil;
//     }else{
//         while (next(last) != Nil) {
// 			prec = last;
// 			last = next(last);
// 		}
// 		(*P) = last;
// 		next(prec) = Nil;
// 		prev(*P) = Nil;
//     }
// }

// /* I.S.     : List tidak kosong. Prec adalah anggota list L.
//    F.S.     : Menghapus Next(Prec) :
//               Pdel adalah alamat elemen list yang dihapus*/
// void DelAfter (List *L, address *Pdel, address Prec){
// /*Kamus Lokal*/

// /*Algoritma*/
//     *Pdel = next(Prec);
//     next(Prec) = next(*Pdel);
//     if(next(Prec) != Nil){
//         prev(next(Prec)) = Prec;
//     }
//     next(*Pdel) = Nil;
//     prev(*Pdel) = Nil;
// }

// /* ----- Primitif Berdasarkan Nilai ----- */
// /* Penambahan Elemen */

// /* I.S.		: L mungkin kosong
//    F.S. 	: X ditambahkan sebagai elemen pertama L
//    Proses 	: Melakukan alokasi sebuah elemen dan menambahkan elemen
//    			  pertama dengan nilai X jika alokasi berhasil.
//    			  Jika alokasi gagal, maka I.S.= F.S. */
// void InsVFirst (List *L, infotype*X){
// /*Kamus Lokal*/
//     address P;

// /*Algoritma*/
//     P = Alokasi(X);
//     if(P != Nil){
//         InsertFirst(&(*L), P);
//     }
// }

// /* I.S. 	: L mungkin kosong
//    F.S.		: X ditambahkan sebagai elemen terakhir L
//    Proses 	: Melakukan alokasi sebuah elemen dan menambahkan elemen list
//    			  di akhir yaitu
//    			  jika alokasi berhasil, elemen terakhir yang baru bernilai X
//    			  Jika alokasi gagal, maka I.S.= F.S. */
// void InsVLast (List *L, infotype*X){
// /*Kamus Lokal*/
//     address P;

// /*Algoritma*/
//     P = Alokasi(X);
//     if(P != Nil){
//         InsertLast(&(*L), P);
//     }
// }

// /* I.S. 	: L mungkin kosong
//    F.S.		: X ditambahkan sebagai elemen setelah Prec
//    Proses 	: Melakukan alokasi sebuah elemen dan menambahkan elemen list
//    			  setelah Prec yaitu
//    			  jika alokasi berhasil, elemen setelah Prec yang baru bernilai X
//    			  Jika alokasi gagal, maka I.S.= F.S. */
// void InsVAfter (List *L, infotype*X){
// /*Kamus Lokal*/
//     address Prec, P, Last;

// /*Algoritma*/
//     P = Alokasi(X);
//     if(ListEmpty(*L)){
//         InsVFirst(&(*L), X);
//     }else{
//         AdrLast(*L, &Prec, &Last);
//         InsertAfter(&(*L), P, Prec);
//     }
// }

// /* Penghapusan ELemen */
// /* I.S.		: List L tidak kosong
//    F.S.		: Elemen pertama list dihapus den nilai info disimpan pada X
//    			 dan alamat elemen pertama di-dealokasi */
// void DelVFirst (List *L, infotype**X){
// /*Kamus Lokal*/
//     address P;

// /*Algoritma*/
//     DelFirst(&(*L), &P);
//     *X = info(P);
//     Dealokasi(&P);
// }

// /* I.S.		: List L tidak kosong
//    F.S.		: Elemen terakhir list dihapus : nilai info disimpan pada X
//    			  dan alamat elemen terakhir di-dealokasi */
// void DelVLast (List *L, infotype**X){
// /*Kamus Lokal*/
//     address P;

// /*Algoritma*/
//     DelLast(L, &P);
//     *X = info(P);
//     Dealokasi(&P);
// }

// /* I.S.		: List L tidak kosong
//    F.S.		: Elemen list setelah Prec dihapus : nilai info disimpan pada X
//    			  dan alamat elemen setelah Prec di-dealokasi */
// void DelVAfter (List *L, infotype**X, infotype*Prec){
//     //Kamus Lokal
//     address P, Q;

//     //Algoritma
//     P = First(*L);

//     if(info(First(*L)) == Prec) {
//         Q = next(P);
//         (*X) = info(Q);
//         next(P) = next(Q);
//         next(Q) = Nil;
//         Dealokasi(&Q);
//     }
//     else {
//         while(info(P)!= Prec) {
//             P = next(P);
//         }
//         Q = next(P);
//         (*X) = info(next(P));

//         next(P) = next(Q);
//         next(Q) = Nil;
//         Dealokasi(&Q);
//     }
// }

/****************** PROSES SEMUA ELEMEN LIST ******************/
/* ----- Proses Semua Elemen List ----- */
/* I.S.     : List mungkin kosong
   F.S.     : Jika list tidak kosong, semua info yg disimpan pada elemen
              list diprint
              Jika list kosong, hanya menuliskan "list kosong" */
void PrintInfo (List L){
/*Kamus Lokal*/
    address P;

/*Algoritma*/
    if(ListEmpty(L)){
        printf("list kosong\n");
    }else{
        P = First(L);
        while(P != Nil && info(P) != '\0'){
            printf("-> %s ", info(P));
            P = next(P);
        }
        printf("\n");
    }
}

/* Mengirimkan banyaknya elemen list; mengirimkan 0 jika list kosong */
int NbElmt (List L){
/*Kamus Lokal*/
    address P;
    int total;

/*Algoritma*/
    P = First(L);
    total = 0;
    while(P != Nil){
        total++;
        P = next(P);
    }
    return total;
}

#endif // list1_C




