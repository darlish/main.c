//
// Created by miche on 11/11/2022.
//
#include "node.h"
#include "stdlib.h"
#include "stdio.h"

p_adv_node create_node_adv (char letter){
    p_adv_node nouv ;
    nouv->sons = (p_adv_node) malloc(sizeof(t_adv_node));
    nouv->letter = letter;
}
















//p_adverbe_node create_node_adv (char letter){
//    p_adverbe_node  nouv;
//    nouv = (p_adverbe_node) malloc (sizeof (t_adverbe_node));
//    nouv->letter = letter;
//    nouv->sons.head = NULL;
//    return nouv;
//}
