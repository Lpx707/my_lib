/*
** EPITECH PROJECT, 2022
** EPITECH CPOOL
** File description:
** function: my_strcpy.c
*/

void my_strcpy(char *dest, char const *src)
{
    int i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}
