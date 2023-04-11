#ifndef LISTSL_H
#define LISTSL_H

#include <stdio.h>
#include <stdlib.h>

typedef int type_item;

typedef struct type_knot{
    type_item info;
    struct type_knot *next;
}type_listSL;

type_listSL * start_list(){
    return NULL;
}

int listSL_empty(type_listSL *list){
    if(list == NULL) return 1;
    return 0;
}

type_listSL * alloc_listSL(){
    type_listSL *new_knot;
    new_knot = (type_listSL*) malloc(sizeof(type_listSL));
    return new_knot;
}

int insert_listSL_at_end(type_listSL **list, type_item item){

    type_listSL *new_knot, *current;
    new_knot = alloc_listSL(); 

    if(new_knot == NULL) return 0; 
    

    new_knot->info = item;
    new_knot->next = NULL;

    if(listSL_empty(*list)){
        *list = new_knot;
    }
    else{
        current = *list;
        while(current->next != NULL){
            current = current->next;
        }

        current->next=new_knot;
    }

    return 1;
}

void print_listSL(type_listSL *list){
    type_listSL *current;
    current = list;

    while(current != NULL){
        printf("%d\n", current->info);
        current = current->next;
    }
}

int remove_listSL(type_listSL **list, type_item e){
    type_listSL *previous, *current;
    current = *list;
    previous = NULL;

    while((current != NULL) && (current->info != e)){
        previous = current;
        current = current->next;
    }

    if(current == NULL) return 0;

    if(previous == NULL){
        *list = current->next;
    }

    else{
        previous->next = current->next;
    }
    free(current);
}

type_listSL *search_listSL(type_listSL *list, type_item e){
    type_listSL *current;
    current = list;

    while((current != NULL) && (current->info != e)){
        current = current->next;
    }

    return current;
}

void kabum_listSL(type_listSL **list){
    type_listSL *current;
    current = *list;

    while(current != NULL){
        *list = current->next;
        free(current);
        current = *list;
    }
    *list = NULL;
}

#endif