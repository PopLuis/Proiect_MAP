#include<stdio.h>
#include<string.h>

typedef struct nod
{
    int valoare;
    struct nod* stanga;
    struct nod* dreapta;
}Nod;

Nod* creeazaNod(int val){
    Nod* nod_N=(Nod*)malloc(sizeof(Nod));
    nod_N->valoare=val;
    nod_N->stanga=NULL;
    nod_N->dreapta=NULL;
    return nod_N;
}

int main(){
    Nod* radacina= NULL;
    int val[]={};



    return 0;
}