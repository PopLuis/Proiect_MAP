#include<stdio.h>
#include<string.h>

//Str nodului arborelui
typedef struct nod
{
    int valoare;
    struct nod* stanga;
    struct nod* dreapta;
}Nod;

//Creeaza un nod nou
Nod* creeazaNod(int val){
    Nod* nod_N=(Nod*)malloc(sizeof(Nod));
    nod_N->valoare=val;
    nod_N->stanga=NULL;
    nod_N->dreapta=NULL;
    return nod_N;
}

//inseram un nod in arbore
Nod* insereaza(Nod* radacina, int val){
if(radacina==NULL){
    return creeazaNod(val);
}
if(val<radacina->valoare){
    radacina->stanga=insereaza(radacina->stanga,val);
}else{
    radacina->dreapta=inserare(radacina->dreapta,val);
}
return radacina;
}


 
//Traversare in PreOrdine
Nod* PreOrdine(Nod* radacina){

if(radacina!=NULL){
    printf("%d ", radacina->valoare);
    PreOrdine(radacina->stanga);
    PreOrdine(radacina->dreapta);
}

}

// Traversare InOrdine
void InOrdine(Nod* radacina) {
    if (radacina != NULL) {
        inOrdine(radacina->stanga);
        printf("%d ", radacina->valoare);
        inOrdine(radacina->dreapta);
    }
}


int main(){
    Nod* radacina= NULL;
    int val[]={};

    printf("Com4");

    return 0;
}