#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#define MAX 1024

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Parametri errati\n");
        exit(1);
    }

    char stringa[MAX], contatore[MAX];
    int p1p0[2], contatore_totale = 0;
    pipe(p1p0);
    printf("Inserisci la parola da ricercare: ");
    scanf("%s", stringa);
    while (strcmp(stringa, "fine") != 0)
    {
        int pid = fork();
        if (pid == 0)
        {
            close(p1p0[0]);
            close(1);
            dup(p1p0[1]);
            close(p1p0[1]);

            execl("/usr/bin/grep", "grep", "-c", stringa, argv[1], NULL);
            return -1;
        }
        read(p1p0[0], contatore, sizeof(contatore));
        printf("Il file ha %d '%s' \n", atoi(contatore), stringa);
        contatore_totale += atoi(contatore);
    }
    return 0;
}