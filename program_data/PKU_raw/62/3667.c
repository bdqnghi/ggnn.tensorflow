int main(){
    char juzi[201];
    gets(juzi);
    char danci[201][201];
    int sum;
    sum=strlen(juzi);
    int ks[201];
    int zz[201];
    int k,z,i;
    k=0;
    z=0;
    for(i=0;i<sum;i++){
        if(i==0||(juzi[i-1]==' '&&juzi[i]!=' ')){
            ks[k]=i;
            k++;
             }
            if(i==sum-1||(juzi[i]!=' '&&juzi[i+1]==' ')){
              zz[z]=i;
              z++;
                }
            }
         int n,g;
         for(g=0,i=0;g<k;g++,i++){
         for(n=0;n<=zz[i]-ks[i];n++){
             danci[g][n]=juzi[n+ks[i]];
         }
        }
        for(i=0;i<k;i++){
            if(i==0){
                printf("%s",danci[i]);
            }else{
                printf(" %s",danci[i]);
            }
        }
    
    return 0;
}


