/*
** EPITECH PROJECT, 2022
** EPITECH CPOOL
** File description:
** function: my_getnbr.c
*/

int my_getnbr(char const *str)
{
    int i = 0;
    int nb = 0;
    int sign = 1;

    while (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-')
            sign = sign * -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9') {
        nb = nb * 10;
        nb = nb + str[i] - '0';
        i++;
    }
    return (nb * sign);
}
