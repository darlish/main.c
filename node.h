//
// Created by miche on 11/11/2022.
//

#ifndef MAIN_C_NODE_H
#define MAIN_C_NODE_H




//typedef struct s_cell
//{
//    p_adverbe_node son;
//    struct s_cell*next;
//} t_cell, *p_cell;
//
//typedef struct s_std_list
//        {
//    p_cell head;
//        } t_std_list;
//
//struct s_adverbe_node
//{
//    char letter ;
//    t_std_list sons;
//};
//typedef struct s_adverbe_node t_adverbe_node, *p_adverbe_node ;
//
//p_adverbe_node create_node_adv (char );



 struct s_adv_node
{
    char letter;
    struct s_adv_node * sons [25] ;
};

typedef struct s_adv_node t_adv_node, *p_adv_node ;


#endif //MAIN_C_NODE_H
