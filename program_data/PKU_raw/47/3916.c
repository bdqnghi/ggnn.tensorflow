
int main(){
    int n,num[100],i,a,j,b;
    scanf("%d",&n);
    for(i=0;i<n;i++){
                     scanf("%d",&num[i]);
                     }
                     if(n%2!=0){
                               b=(n-1)/2;
                               }
                     else{
                          b=n/2;
                          }
                    for(i=0;i<b;i++){
                                                          a=num[i];
                                                          num[i]=num[n-i-1];
                                                          num[n-i-1]=a;
                                                          }
                                                                                                                    
                                                          for(i=0;i<n-1;i++){
                                                          printf("%d ",num[i]);
                                                          }
                                                          printf("%d",num[n-1]);

                                                          return 0;
                                                          }
                                                          