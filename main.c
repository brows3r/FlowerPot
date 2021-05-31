/* 
FlowerPot
Date: 5/30/21
Made by: https://github.com/0x1CA3
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void banner()
{
    printf("\n                            ╔═╗┬  ┌─┐┬ ┬┌─┐┬─┐╔═╗┌─┐┌┬┐");
    printf("\n                            ╠╣ │  │ ││││├┤ ├┬┘╠═╝│ │ │ ");
    printf("\n                            ╚  ┴─┘└─┘└┴┘└─┘┴└─╩  └─┘ ┴ ");
}

void help()
{
    printf("\n      ╔═ Command ═══════════════════════════ Description ═══════════════════════╗");
    printf("\n      ║  help                                Displays help commands.            ║");
    printf("\n      ║  listener                            Starts up a listener. [NetCat]     ║");
    printf("\n      ║  command                             Lets you execute a system command. ║");
    printf("\n      ║  banner                              Displays banner.                   ║");
    printf("\n      ║  clear [Or if on Windows use cls]    Clears the screen.                 ║");
    printf("\n      ║  exit                                Exits the program.                 ║");
    printf("\n      ╚═════════════════════════════════════════════════════════════════════════╝\n");    
}

int terminal()
{
    printf("\nUse the 'back' command to go back to the main menu.");
    while (1)
    {
        char ques[100];                        
        printf("\nEnter the command you want to execute > ");
        scanf("%s", ques);
        if (strcmp(ques, "back") == 0)
        {
            system("clear");
            main();
        }
        system(ques);
        terminal();
        return 0;
    }
}

int main()
{
    banner();
    help();
    while (1)
    {
        char menu[100];
        printf("\nuser@flowerpot > ");
        scanf("%s", menu);
        if (strcmp(menu, "help") == 0)
        {
            help();
        }
        else if (strcmp(menu, "banner") == 0)
        {
            banner();
            help();
        }
        else if (strcmp(menu, "command") == 0)
        {
            terminal();
        }
        else if (strcmp(menu, "clear") == 0)
        {
            system("clear");
        }
        else if (strcmp(menu, "cls") == 0)
        {
            system("cls");
        }
        else if (strcmp(menu, "listener") == 0)
        {
            system("nc -lvp 4444");
        }
        else
        {
            printf("\nCommand [%s] was not found.", menu);
        }
    }
    return 0;
}