int main(){
    int n,i,j,s,S[100],G[100];
    scanf("%d",&n);
    char zf[100][21];
    for(i=0;i<n;i++){
        scanf("%s",zf[i]);
    }
    for(i=0;i<n;i++){ 
       if(
           (zf[i][0]>='A'&&zf[i][0]<='Z')||
           (zf[i][0]>='a'&&zf[i][0]<='z')||
            (zf[i][0]=='_')
            ){
            G[i]=strlen(zf[i]);
       for(j=0;j<G[i];j++){
           if(
              (zf[i][j]>='A'&&zf[i][j]<='Z')||
              (zf[i][j]>='a'&&zf[i][j]<='z')||
              (zf[i][j]>='0'&&zf[i][j]<='9')||
              (zf[i][j]=='_')
              )
                 S[i]=1; 
           else {S[i]=0; 
           break;}
       }            
       }
       else S[i]=0;
       }
       for(i=0;i<n;i++)
      { 
     if(S[i]==0)printf("no\n");
       else printf("yes\n");     
      }
    return 0;
}

