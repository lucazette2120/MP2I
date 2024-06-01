#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "lexer.h" 

maillons* est_bool(maillon* debut){
    maillon* contenu = debut;
    while((contenu->argument!=NULL)){
        if ((contenu->argument == "true")||(contenu->argument == "false") 
        contenu = contenu->suivant ;
    }
}

/*gere les operateur dans les variable*/
maillon* contenu_variable(maillon* debut){
    maillon* contenu = debut;
    while ( contenu->argument != ";" ) {
        assert(contenu->argument != NULL);
        if (contenu->argument == "%") {
            printf("mod");
        }
        else {printf("%s", contenu->argument )};
        contenu = contenu->suivant ;
    }
    return contenu;
} 
/*traduit les creation variable*/
maillon* variable(maillon* debut){
    assert(debut->lexeme == "T" || debut->lexeme != "void");
    printf("let ");

    maillon* var = debut->suivant;
    maillon* egal = var->suivant;
    maillon* contenu = egal->suivant;      
    printf("%s = ref" , var->argument);
    contenu = contenu_variable(contenu);
    return contenu;
}

/*traduit les redefinition de variable*/
maillon* redef_variable(maillon* debut){

}
/*fonction générale*/
void traduction(maillon* debut){
    maillon* charactere = debut;
    while (charactere->argument != "{"){
        charactere = charactere->suivant; // en supposant qu'il n'y ait pas le caractère "{" avant, on passe tout le code précédant le "main"
    }
}

int main(){
    
}
