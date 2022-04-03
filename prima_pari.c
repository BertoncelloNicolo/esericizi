 #include<stdio.h> 
 int main()
 {
 int numero = 0;
 int caricato[10];
 for(int i=0; a<=10;i++)
 {
   printf("inserisci un numero");
   scanf(caricato[i]);
 }
            for (int a = 0; a <= 10; a++)
            {
                for (int i = a + 1; i <=10; i++)
                {
                    if (caricato[i]%2==0) //condizione per la divisibilità 
                    {
                        numero = caricato[a];
                        caricato[a] = caricato[i];
                        caricato[i] = numero;
                    }
                }
                Console.WriteLine("array ordinato:" + " " + caricato[a]);
            }
            return caricato;
 }