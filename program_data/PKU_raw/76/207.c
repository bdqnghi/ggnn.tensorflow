int main (){
int n,i,j,k,h,l;
scanf("%d",&n);
int a[10001],b[10001],c[10001];
for(j=0;j<10001;j++){
                     c[j]=0;
                     }
for(i=0;i<n;i++){
                 scanf("%d %d",&(a[i]),&(b[i]));
                 if(i>0){
                         if(b[i]>b[i-1]){
                                         k=b[i];
                                         }}
                 else{k=b[0];}
    for(j=(a[i]);j<b[i];j++){
                            c[j]=1;
                            }
                            }
    for(j=0;j<=10001;j++){
                          if(c[j]==1){
                                     h=j;
                                     for(j=j;j<=k;j++){ 
                                                      if(j==k-1){
                                                             
                                                              printf("%d %d",h,k);
                                                              goto x;
                                                              }
                                                      if(c[j]==0){
                                                                 printf("no");
                                                                 goto x;
                                                                 }
                                                        }
                                     }
                           }x:
                                     return 0;
                                     }
                      