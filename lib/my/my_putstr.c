/*
** EPITECH PROJECT, 2022
** EPITECH CPOOL
** File description:
** function: my_putstr.c
*/

void my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
}
