int main(){
    int n,i,k,j;
    scanf("%d",&n);
    char zf[n][21];
    int judge[n];
    
    for(i=0;i<n;i++){
        scanf("%s",zf[i]);}

    for(i=0;i<n;i++){
        for(j=0;zf[i][j]!='\0';j++){
           if((zf[i][j]>='a'&&zf[i][j]<='z')||
              (zf[i][j]>='A'&&zf[i][j]<='Z')||
              (zf[i][j]=='_')||
              (zf[i][j]>='0'&&zf[i][j]<='9')){
            judge[i]=1;}
           else{judge[i]=0;
                     break;}      
}}
    for(i=0;i<n;i++){
       if(judge[i]==1){
          if(zf[i][0]>='0'&&zf[i][0]<='9'){judge[i]=0;}
       }
       }
 
   for(i=0;i<n;i++){
      if(judge[i]==1){printf("yes\n");}
                 else{printf("no\n");}}

}

