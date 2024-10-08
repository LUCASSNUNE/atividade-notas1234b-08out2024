#include <stdio.h>
#include <math.h>

int main() {
  
        float notaBimestre1;
        float notaBimestre2;
        float notaBimestre3;
        float notaBimestre4;
        float somabimestres; 
        
        scanf("%f", &notaBimestre1);

        printf("Informe qual sua nota do bimetre 2: ");
        scanf("%f", &notaBimestre2);

        printf("Informe qual sua nota do bimetre 3: ");
        scanf("%f", &notaBimestre3);

        printf("Informe qual sua nota do bimetre 4: ");
        scanf("%f", &notaBimestre4);

        somabimestres = (notaBimestre1 + notaBimestre2 +notaBimestre3 + notaBimestre4) / 4;

        
        if (somabimestres>=7) {
        printf ("aprovado");
        }
        
        else if (somabimestres >= 4 && somabimestres < 7) {
        printf ("exame final");
        }

        else {
        printf ("reprovado");
        }

}