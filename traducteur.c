#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "lexer.h" 


maillon* contenu_variable(maillon* debut){

}

maillon* variable(maillon* debut){
    assert(debut->lexeme == "T" || debut->lexeme != "void");
    printf("let ");
    maillon* var = debut->suivant;
    maillon* egal = var->suivant;
    maillon* contenu = egal->suivant;
    printf("%s = ref ", var->argument);

}

void traduction(maillon* debut){
    maillon* charactere = debut;
    while (charactere->argument != "{"){
        charactere = charactere->suivant; // en supposant qu'il n'y ait pas le caractère "{" avant, on passe tout le code précédant le "main"
    }
}

int main(){
    
}
