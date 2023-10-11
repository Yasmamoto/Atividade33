//atividade de linguagem C feita no dia 02/09/2023, questão 33
#include <stdio.h>
int main()
{
    int idade1;
    int idade2;
    int idade3;
    int media;
    
    printf("Digite a idade da pessoa 1: ");
    scanf("%i", &idade1);
    
    printf("Digite a idade da pessoa 2: ");
    scanf("%i", &idade2);
    
    printf("Digite a idade da pessoa 3: ");
    scanf("%i", &idade3);
    media = (idade1 + idade2 + idade3)/3;
    
    printf(" o resultado da media das idade é igual %i", media);
    
    return 0;
}
