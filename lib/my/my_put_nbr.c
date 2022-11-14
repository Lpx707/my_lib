/*
** EPITECH PROJECT, 2022
** EPITECH CPOOL
** File description:
** function: my_put_nbr.c
*/

int my_put_nbr(int nb)
{
    unsigned int i;

    i = 0;
    if (nb >= 0)
        i = nb;
    if (nb < 0)
        i = nb * -1;
    if (i > 9)
        my_put_nbr(i / 10);
        my_putchar((i % 10) + '0');
}
