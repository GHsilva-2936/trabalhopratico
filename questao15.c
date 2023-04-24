#include <stdlib.h>
#include <stdio.h>

int main()
{

int cont=0,n_turmas=0,quant=0,n_alunos=0,mat=0,alunos_A=0,prct_m5=0;
char chamada,turma;
float prct_A=0;

printf("Digite o numero de turmas: ");
scanf("%d",&n_turmas);

for(cont=0; cont<n_turmas; cont++)
{
   printf("Turma:");
   scanf(" %c",&turma);
   printf("Numero de alunos:");
   scanf(" %d",&n_alunos);
   for(quant=0; quant<n_alunos; quant++)
   {
      printf("matricula: ");
      scanf(" %d",&mat);
      printf("Ausente ou presente");
      scanf(" %c",&chamada);
      if(chamada =='A')
      {
      alunos_A++;
      }
   }

   prct_A = (float)(alunos_A*100)/n_alunos;

   if(prct_A>5)
   prct_m5++;
   printf("TURMA %c\nPORCENTAGEM DE AUSENCIA = %.2f\n",turma,prct_A);

}

printf("NUMERO DE TURMA COM AUSENCIA SUPERIOR A 5 PORCENTO = %d\n",prct_m5);

return 0;

}
