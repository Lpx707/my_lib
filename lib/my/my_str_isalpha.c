/*
** EPITECH PROJECT, 2022
** EPITECH CPOOL
** File description:
** function: my_str_isalpha.c
*/

int my_str_isalpha(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] < 'A' || str[i] > 'Z' && str[i] < 'a' || str[i] > 'z')
            return (0);
        i++;
    }
    return (1);
}
