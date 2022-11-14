/*
** EPITECH PROJECT, 2022
** EPITECH CPOOL
** File description:
** fuction: my_swap.c
*/

void my_swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}
