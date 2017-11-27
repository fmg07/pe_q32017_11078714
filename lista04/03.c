#include <stdio.h>
#include <stdlib.h>

#define QNTA 50

typedef struct alunos{
    char nome[100];
    int ra;
    float p1,p2,p3;
    float media;
}alunos;


void Media(alunos *A)
{
    int i;

    for(i=0;i<QNTA;i++){
        A[i].media=(A[i].p1+A[i].p2+A[i].p3)/3;
    }
}

void Imprime_med(alunos *A, FILE *f)
{
    int i;
    for(i=0;i<QNTA;i++){

        fprintf(f,"%s %d %.2f %.2f %.2f %.2f\n",A[i].nome,A[i].ra,A[i].p1,A[i].p2,A[i].p3,A[i].media);

    }
}

int main()
{
    alunos *A;
    FILE *fp;
    FILE *fmed;
    int i;

    A=malloc(QNTA*sizeof(alunos));

    fp=fopen("lista_alunos.txt","r");
    fmed=fopen("lista_alunos_med.txt","w");

    for(i=0;i<QNTA;i++){
        fscanf(fp,"%s %d %f %f %f",&A[i].nome,&A[i].ra,&A[i].p1,&A[i].p2,&A[i].p3);
    }

    printf("%s %d %.2f %.2f %.2f\n",A[1].nome,A[1].ra,A[1].p1,A[1].p2,A[1].p3);


    Media(A);

    Imprime_med(A,fmed);

    fclose(fp);
    fclose(fmed);

    free(A);

    return 0;
}
