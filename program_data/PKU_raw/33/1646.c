int main(){
    int n,i,m;
     scanf("%d",&n);
     char dna[n][256];
   
    for(i=0;i<n;i++){
        scanf("%s",&dna[i]);
    }
    for(i=0;i<n;i++){
        for(m=0;dna[i][m]!='\0';m++){
            if(dna[i][m]=='A'){
               dna[i][m]='T' ;
               continue;
            }
            if(dna[i][m]=='G'){
               dna[i][m]='C' ;
               continue;
            }
            if(dna[i][m]=='C'){
               dna[i][m]='G' ;
               continue;
            }
            if(dna[i][m]=='T'){
               dna[i][m]='A' ;
               continue;
            }
        }
       }
     for(i=0;i<n;i++){
        printf("%s\n",dna[i]);
     }
   return 0;         
}

