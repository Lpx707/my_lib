/*
** EPITECH PROJECT, 2022
** EPITECH FUNCTION
** File description:
** function: my_print_colors.c
*/

void print_blue(const char *str)
{
    my_putstr("\033[1;34m");
    my_putstr(str);
    my_putstr("\033[0m");
}

void print_red(const char *str)
{
    my_putstr("\033[1;31m");
    my_putstr(str);
    my_putstr("\033[0m");
}

void print_green(const char *str)
{
    my_putstr("\033[1;32m");
    my_putstr(str);
    my_putstr("\033[0m");
}

void print_yellow(const char *str)
{
    my_putstr("\033[1;33m");
    my_putstr(str);
    my_putstr("\033[0m");
}

void print_magenta(const char *str)
{
    my_putstr("\033[1;35m");
    my_putstr(str);
    my_putstr("\033[0m");
}

void print_cyan(const char *str)
{
    my_putstr("\033[1;36m");
    my_putstr(str);
    my_putstr("\033[0m");
}

void print_white(const char *str)
{
    my_putstr("\033[1;37m");
    my_putstr(str);
    my_putstr("\033[0m");
}

void print_black(const char *str)
{
    my_putstr("\033[1;30m");
    my_putstr(str);
    my_putstr("\033[0m");
}
