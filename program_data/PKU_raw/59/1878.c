int main(){
    int n,m,i,k,t,s;
    scanf("%d",&n);
    char a[n][n];
    for(i=0;i<n;i++){
        for(k=0;k<n;k++){
            scanf(" %c",&(a[i][k]));
        }
    }
    scanf("%d",&m);
    if(n>1){
    for(i=1;i<m;i++){
        
         for(k=0;k<n-1;k++){
            for(t=0;t<n;t++){
                if((a[k][t]=='@')&&(a[k+1][t]=='.')){
                    a[k+1][t]='*';
                }
            }
         }
         for(k=1;k<n;k++){
             for(t=0;t<n;t++){
                 if((a[k][t]=='@')&&(a[k-1][t]=='.')){
                     a[k-1][t]='*';
                 }
             }
         }
         for(k=0;k<n-1;k++){
             for(t=0;t<n;t++){
                 if((a[t][k]=='@')&&(a[t][k+1]=='.')){
                     a[t][k+1]='*';
                 }
             }
         }
         for(k=1;k<n;k++){
             for(t=0;t<n;t++){
                 if((a[t][k]=='@')&&(a[t][k-1]=='.')){
                     a[t][k-1]='*';
                 }
             }
         }
         for(k=0;k<n;k++){
             for(t=0;t<n;t++){
                 if(a[k][t]=='*'){
                     a[k][t]='@';
                 }
             }
         }
    }
    }
    s=0;
    for(i=0;i<n;i++){
        for(k=0;k<n;k++){
            if(a[i][k]=='@'){
                s=s+1;
            }
        }
    }
    printf("%d",s);
    return 0;
}
