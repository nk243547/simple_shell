#include "shell.h"

/**
* C Simple Shell - Alx Group Project by Brenda Kendi and Nelson.
* main - func with infinite loop
* @ac: No use
* @av: No use
* Return: loop.
**/
int main(int ac, char **av)
{
(void)av;
(void)ac;

signal(SIGINT, controlC);
prompt();
return (0);
}
