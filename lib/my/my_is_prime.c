/*
** EPITECH PROJECT, 2022
** EPITECH CPOOL
** File description:
** funtion: my_is_prime.c
*/

int my_is_prime(int nb)
{
    int i = 2;

    if (nb <= 1)
        return (0);
    while (i < nb) {
        if (nb % i == 0)
            return (0);
        i++;
    }
    return (1);
}
