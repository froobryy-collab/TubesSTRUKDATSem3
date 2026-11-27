#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <iostream>
#include <string>

using namespace std;

struct anggota {
    string id,nama,jabatan;
    int angkatan;
};

struct divisi{
    string namaDiv;
};

typedef struct elmAnggota *adrAnggota;
typedef struct elmDivisi *adrDivisi;

struct elmAnggota {
    anggota info;
    adrAnggota next,prev;
};

struct elmDivisi{
    divisi info;
    adrDivisi next,prev;
    adrAnggota childNext;
};

struct List{
    adrDivisi first,last;
};

struct kolaborasi{
    string namaKegiatan,deskripsi;
    adrDivisi d1,d2;
};

void createList(List &L);
adrDivisi createDivisi(string namaDiv);
void insertDivisi(List &L,adrDivisi p);
adrDivisi findDivisi(List &L,string namaDiv);
void deleteDivisi(List &L,string namaDiv);
void printDivisi(List L);
adrAnggota createAnggota(anggota x);
void insertAnggota(List &L,string namaDiv, adrAnggota q);
adrAnggota findAnggota(adrDivisi p, string id);
void deleteAnggota(List &L,string namaDiv,string id);
void printAnggota(List L,string namaDiv);


#endif // HEADER_H_INCLUDED
