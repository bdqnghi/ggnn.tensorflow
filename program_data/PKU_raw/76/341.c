int main(){
    int n,a[10000],b[10000],c[10000];
int i,j,min,max;
int e,d=1;
scanf("%d",&n);
for(i=0;i<n;i++){
                 scanf("%d %d",&a[i],&b[i]);
                 }
for(i=0;i<10000;i++){
                 c[i]=0;
                 }
                 for(i=0;i<n;i++){
                                 if(a[i]==b[i]){
                                                continue;
                                                }
                                  j=a[i];
                                  while(j<b[i]&&j>=a[i]){
                                  c[j]=1;
                                  j++;
                                  }
                                  
                 }
                 min=a[0];
                 max=b[0];
                 for(i=1;i<n;i++){
                                  if(min>a[i]){
                                               min=a[i];
                                               }
                                               if(max<b[i]){
                                                            max=b[i];
                                                            }
                                  }
                 for(j=min;j<max;j++){
                                          if(c[j]==0){
                                                    e=0;
                                                     }
                                                     if(e==0||d==0){
                                                                    d=0;
                                                                    }
                                          }
                                          if(d==0){
                                                   printf("no");
                                                   }else{
                                                         printf("%d %d",min,max);
                                                         }

                                  return 0;                              
}
                 
