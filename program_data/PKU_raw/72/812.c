int main(){
    int sz[20][20],m,n,sc[1000],sk[1000],a,b,i,t;
    scanf("%d %d",&m,&n);
    for(a=0;a<m;a++){
                     for(b=0;b<n;b++){
                                      scanf("%d",&sz[a][b]);
                                      }
                                      }
    i=0;
    if((sz[0][0]>=sz[0][1])&&(sz[0][0]>=sz[1][0])){
                                                   sc[i]=0;
                                                   sk[i]=0;
                                                   i++;
                                                   }
    for(b=1;b<n-1;b++){
                       if((sz[0][b]>=sz[1][b])&&(sz[0][b]>=sz[0][b-1])&&(sz[0][b]>=sz[0][b+1])){
                                                                                                sc[i]=0;
                                                                                                sk[i]=b;
                                                                                                i++;
                                                                                                }
                                                                                                }
   if((sz[0][n-1]>=sz[0][n-2])&&(sz[0][n-1]>=sz[1][n-1])){
                                                          sc[i]=0;
                                                          sk[i]=n-1;
                                                          i++;
                                                          }
   for(a=1;a<m-1;a++){
                      if((sz[a][0]>=sz[a][1])&&(sz[a][0]>=sz[a-1][0])&&(sz[a][0]>=sz[a+1][0])){
                                                                                               sc[i]=a;
                                                                                               sk[i]=0;
                                                                                               i++;
                                                                                               }
                      for(b=1;b<n-1;b++){
                                         if((sz[a][b]>=sz[a][b-1])&&(sz[a][b]>=sz[a][b+1])&&(sz[a][b]>=sz[a-1][b])&&(sz[a][b]>=sz[a+1][b])){
                                                                                                                                            sc[i]=a;
                                                                                                                                            sk[i]=b;
                                                                                                                                            i++;
                                                                                                                                            }
                                                                                                                                            }
                     
                      if((sz[a][n-1]>=sz[a][n-2])&&(sz[a][n-1]>=sz[a-1][n-1])&&(sz[a][n-1]>=sz[a+1][n-1])){
                                                                                                           sc[i]=a;
                                                                                                           sk[i]=n-1;
                                                                                                           i++;
                                                                                                           }
                                                                                                           }
  
   if((sz[m-1][0]>=sz[m-2][0])&&(sz[m-1][0]>=sz[m-1][1])){
                                                          sc[i]=m-1;
                                                          sk[i]=0;
                                                          i++;
                                                          }
   for(b=1;b<n-1;b++){
                      if((sz[m-1][b]>=sz[m-2][b])&&(sz[m-1][b]>=sz[m-1][b-1])&&(sz[m-1][b]>=sz[m-1][b+1])){
                                                                                                           sc[i]=m-1;
                                                                                                           sk[i]=b;
                                                                                                           i++;
                                                                                                           }
                                                                                                           }                                            
    if((sz[m-1][n-1]>=sz[m-1][n-2])&&(sz[m-1][n-1]>=sz[m-2][n-1])){
                                                                   sc[i]=m-1;
                                                                   sk[i]=n-1;
                                                                   i++;
                                                                   }
   
    t=i;
    for(i=0;i<t;i++){
                     printf("%d %d\n",sc[i],sk[i]);
                     }
    
    return 0;
    }                    