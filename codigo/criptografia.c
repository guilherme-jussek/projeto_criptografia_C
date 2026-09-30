#include <stdio.h>
#include <string.h>

int main(){
    char letras[]="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    char p[16],c[16],d[16];
    int i,n,x,f=1,a=1,y;
    FILE *arquivo;

    printf("Palavra: ");
    scanf("%15s",p);
    n=strlen(p);

    for(i=0;i<n;i++)
        if(p[i]<'A'||p[i]>'Z'){
            printf("Use somente letras maiusculas!\n");
            return 0;
        }

    for(i=0;i<n;i++){
        x=p[i]-'A';
        c[i]='A'+(x+3)%26;
    }
    c[n]=0;

    for(i=0;i<n;i++){
        x=strchr(letras,c[i])-letras;
        d[i]=letras[(x+f)%62];
        y=f;
        f=a;
        a+=y;
    }
    d[n]=0;

    printf("Cesar: %s\n",c);
    printf("Fibonacci + Cesar: %s\n",d);

    arquivo=fopen("../resultados/resultado_criptografia.txt","w");

    if(arquivo==NULL){
        printf("Erro ao criar o arquivo de resultado.\n");
        return 1;
    }

    fprintf(arquivo,"Palavra original: %s\n",p);
    fprintf(arquivo,"SHIFT: 3\n");
    fprintf(arquivo,"Sequencia: Fibonacci\n");
    fprintf(arquivo,"Cesar: %s\n",c);
    fprintf(arquivo,"Palavra codificada: %s\n",d);
    fprintf(arquivo,"Letras: %d\n",n);

    fclose(arquivo);

    return 0;
}
