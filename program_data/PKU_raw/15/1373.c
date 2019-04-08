 int main()
 {
   int n;
   scanf("%d",&n);
   int a[n][n],i,j,x1,x2,y1,y2,s;
  for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                scanf("%d",&a[i][j]);}
                   }
for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                if(a[i][j]==0){
                             x1=i;
                              y1=j;
                               break;}
                            }
                 if(j<n){
                     break;}
}
for(i=n-1;i>=0;i--){
                     for(j=n-1;j>=0;j--) {
                              if(a[i][j]==0){
                                      x2=i;
                                      y2=j;
                                      break;}
                                   }
                       if(j>=0){break;}
                     }
  
       s=(x2-x1-1)*(y2-y1-1);
     printf("%d",s);
return 0;
}            