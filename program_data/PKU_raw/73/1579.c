int main()
{
    int i,j,t,s=0;
    int a[5][5],b[5],c[5],d[5];
    for(i=0;i<5;i++){
                     for(j=0;j<5;j++){
                                      scanf("%d",&a[i][j]);
                                      }
                     }
    for(i=0;i<5;i++){
                      b[i]=a[i][0];
                      for(j=0;j<5;j++){
                                      if(a[i][j]>=b[i]){
                                                     b[i]=a[i][j];
                                                     d[i]=j;
                                                     }
                                      }
                      
                     }
    for(j=0;j<5;j++){
                      c[j]=a[0][j];
                      for(i=0;i<5;i++){
                                      if(a[i][j]<=c[j]){
                                                     c[j]=a[i][j];
                                                     }
                                      }
                     }
    for(i=0;i<5;i++){
                      t=d[i];
                      if(b[i]==c[t]){
                                     printf("%d %d %d",i+1,t+1,b[i]);
                                     s=s+1;
                                     }
                      }
    if(s==0){
             printf("not found");
             }
return 0;
}