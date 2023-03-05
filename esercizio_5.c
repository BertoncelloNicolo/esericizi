#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/wait.h>
#define WRITE 1
#define READ 0

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("inserire un numero di parametri validi\n");
        exit(0);
    }
    char stringa[1000], codice[14];
    int p1p0[2], tot = 0, pid;

    pipe(p1p0);
    while (1)
    {
        printf("Inserisci codice:\n");
        scanf("%s", codice);

        if (strcmp("esci", codice) == 0)
        {
            printf("è stato trovato un numero di insoluti pari a: %d \n", tot);
            close(p1p0[WRITE]);
            close(p1p0[READ]);
            exit(0);
        }

        pid = fork();
        if (pid == 0)
        {
            close(p1p0[READ]);
            close(WRITE);
            dup(p1p0[WRITE]);
            close(p1p0[WRITE]);

            execl("/bin/grep", "grep", "-c", strcat(codice, " insoluto"), argv[1], NULL);
            exit(0);
        }

        read(p1p0[READ], stringa, sizeof(stringa));
        printf("è stato trovato un numero di insoluti pari a: %d \n", atoi(stringa));
        tot = tot + atoi(stringa);
    }
    return 0;
}