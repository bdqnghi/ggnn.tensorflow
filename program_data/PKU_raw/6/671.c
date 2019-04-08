int main () {
      int i,j,k,n,row[99],col[99],s[99][99][99],sum[99]={0};
      scanf("%d",&n);
      for(i=0;i<n;i++){
         scanf("%d %d",&row[i],&col[i]);
         for(j=0;j<row[i];j++){
            for(k=0;k<col[i];k++){
                scanf("%d",&s[i][j][k]);
                if((j==0)||(k==0)||(j==(row[i]-1))||(k==col[i]-1))
                            { sum[i]+=s[i][j][k];}
                }
         }
         
      }
      for(i=0;i<n;i++){
         printf("%d\n",sum[i]);
         }
         
      
       
       
       
       
       return 0;
       }