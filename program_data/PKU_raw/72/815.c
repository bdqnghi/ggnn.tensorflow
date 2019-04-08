int main(){
    int m,n,s[20][20],i,k,a,z[20],x[20];
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++){
                     for(k=0;k<n;k++){
                                      scanf("%d\n",&s[i][k]);
                                      }
                                      }
                                      if(s[0][0]>=s[0][1]&&s[0][0]>=s[1][0]){ 
                                                                             printf("0 0\n");
                                                                             }
                                      for(i=1;i<n-1;i++){
                                                         if((s[0][i]>=s[0][i-1])&&(s[0][i]>=s[0][i+1])&&(s[0][i]>=s[1][i])){
                                                               printf("0 %d\n",i);
                                                         }
                                                         }
                                                         if(s[0][n-1]>=s[0][n-2]&&
                                                         s[0][n-1]>=s[1][n-1]){
                                                                printf("0 %d\n",n-1);
                                                                }                                                                                                           
                                      for(i=1;i<m-1;i++){
                                                              if(s[i][0]>=s[i-1][0]&&s[i][0]>=s[i+1][0]
                                                              &&s[i][0]>=s[i][1]){
                                                                                  printf("%d 0\n",i);
                                                                                  }
                                                 for(k=1;k<n-1;k++){                                         
                                                              if(s[i][k]>=s[i-1][k]&&
                                                              s[i][k]>=s[i+1][k]&&s[i][k]>=s[i][k-1]&&
                                                               s[i][k]>=s[i][k+1]){
                                                                                   printf("%d %d\n",i,k);
                                                                                   }
                                                                                   }
                                                              if(s[i][n-1]>=s[i-1][n-1]&&s[i][n-1]>=s[i+1][n-1]
                                                              &&s[i][n-1]>=s[i][n-2]){
                                                                                  printf("%d %d\n",i,n-1);
                                                                                  }
                                                                                  }
                                                               if(s[m-1][0]>=s[m-1][1]&&s[m-1][0]>=s[m-2][0]){
                                                                             printf("%d 0\n",m-1);
                                                                             }
                                      for(a=1;a<n-1;a++){
                                                         if(s[m-1][a]>=s[m-1][a-1]&&
                                                         s[m-1][a]>=s[m-1][a+1]&&s[m-1][a]>=s[m-2][a]){
                                                               printf("%d %d\n",m-1,a);
                                                         }
                                                         }
                                                         if(s[m-1][n-1]>=s[m-1][n-2]&&
                                                         s[m-1][n-1]>=s[m-2][n-1]){
                                                                printf("%d %d\n",m-1,n-1);
                                                                }                        
                                                          
                                      
    
     
 return 0;
}

