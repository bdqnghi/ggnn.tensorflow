
int main()
{
    int min(int x[],int y);
    int i,j,k,n,a[200][200],b[200],sum,t;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
                      sum=0;
                      for(j=1;j<=n;j++){
                                        for(k=1;k<=n;k++){scanf("%d", &a[k][j]);}
                                        }
                      
                      
                      for(t=n;t>=2;t--){
                      
                      for(j=1;j<=t;j++){
                                        for(k=1;k<=t;k++){b[k]=a[k][j];}
                                        for(k=1;k<=t;k++){a[k][j]-=min(b,t);}
                                        }
                      for(j=1;j<=t;j++){
                                        for(k=1;k<=t;k++){b[k]=a[j][k];}
                                        for(k=1;k<=t;k++){a[j][k]-=min(b,t);}
                                        }
                      sum+=a[2][2];
                      for(j=3;j<=t;j++){
                                        for(k=3;k<=t;k++){a[k-1][j-1]=a[k][j];}
                                        }
                      for(j=3;j<=t;j++){a[1][j-1]=a[1][j];}
                      for(j=3;j<=t;j++){a[j-1][1]=a[j][1];}
                      
                                         }
                      
                      
                      printf("%d\n", sum);
                      
                      
                      }
    return 0;
    }
    
int min(int x[],int y)
{
    int i,min=999999;
    for(i=1;i<=y;i++){
                      if(x[i]<min){min=x[i];}
                      }
    return(min);
    }
