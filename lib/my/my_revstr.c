/*
** EPITECH PROJECT, 2022
** EPITECH CPOOL
** File description:
** function: my_revstr.c
*/

char *my_revstr(char *str)
{
    int i = 0;
    int j = 0;
    char c;

    while (str[i] != '\0') {
        i++;
    }
    i--;
    while (i > j) {
        c = str[i];
        str[i] = str[j];
        str[j] = c;
        i--;
        j++;
    }
    return (str);
}
