int main(){
    int n,i,t;
    int max,cmax;
    int sz[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
                     scanf("%d",&sz[i]);
                     }
                     max=sz[0];
                     cmax=sz[1];
                     for(i=2;i<n;i++){
                                      if(sz[i]>max){
                                                   t=max;
                                                   max=sz[i];
                                                   cmax=t;
                                                   }else if(sz[i]>cmax&&sz[i]<max){
                                                         cmax=sz[i];
                                                         }
                                                         }
                                                         printf("%d\n%d\n",max,cmax);
                                                         return 0;
                                                         }