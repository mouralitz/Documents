#include <stdio.h>
#include "listSL.h"

int main(){
    type_listSL *list;
    list = start_list();

    if(listSL_empty(list) == 1){
        printf("It's Empty.\n");
    }

    for (int i = 10; i < 70; i +=10){
        insert_listSL_at_end(&list, i);
    }

    print_listSL(list);
    remove_listSL(&list, 30);
    remove_listSL(&list, 10);
    remove_listSL(&list, 60);

    printf("\n");

    print_listSL(list);

    printf("\n");

    if(search_listSL(list, 50)!= NULL){
        printf("Elemento encontrado\n");
    }
    else{
        printf("Elemento n encontrado\n");
    }

    return 0;
}
