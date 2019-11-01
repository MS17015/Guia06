#include <stdio.h>
#include <rpc.h>
#include <stdlib.h>
int estaVacia();
int top=-1;
struct nodo{
    int info;
    struct nodo *sig;
};
struct nodo *raiz=NULL;
void insertar(int x ){
    struct nodo *nuevo;
    nuevo = malloc(sizeof(struct nodo));
    nuevo->info=x;
    if(raiz==NULL){
        raiz=nuevo;
        nuevo->sig=NULL;
    }
    else{
        nuevo->sig=raiz;
        raiz = nuevo;
    }
}

int estaVacia(){
    if(top==-1){

        return 1;
    }
   else{
       return 0;
   }


}
int main() {
insertar(10);
    insertar(40);
    insertar(3);
    if(estaVacia()==0){
        printf("Esta vacia \n");
    }else {

        printf("La pila no esta vacia");
    }


    return 0;
}