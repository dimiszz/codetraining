#include<stdio.h>
#include<stdlib.h>

#define PI 3.14159265
#define TERRA 40075

int count = 0;

int solve(){
    int i;
    count++;
    int existe = 0;
    int test = 0;
    
    float tam; scanf("%f\n", &tam);
    int circ = 2* tam * PI;
    
    char valores[7]; sprintf(valores, "%i", circ);
    
    char codigo[24]; scanf("%s\n", codigo);
    
    if (circ > TERRA) return printf("OLHA O TAMANHO DESSE PLANETA\n");
    
    for(i = 0; codigo[i+1] != '\0'; i++){
        if (codigo[i] == valores[existe]){
            existe++;
            if (valores[existe] == '\0'){
                test = 1;
                codigo[i+1] = '\0';
                break;
            }
        }
        else {
            existe = 0;
            continue;
        }
    }
    
    
    if (test) return printf("Foguete nao tem marcha re, vamo bora fml\n");
    else return printf("Ferrou, estamos no planeta errado\n");
    
    
}

int main() {
    int n; scanf("%i", &n);
    
    while (n--) solve();
    
    return 0;
}