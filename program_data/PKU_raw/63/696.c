int main(){
    int x1,x2,y1,y2;
    int i,j,k;
    int aa[1000][1000],bb[1000][1000],cc[1000][1000];
    cin>>x1>>y1;
    for(i=1;i<=x1;i++){
      for(j=1;j<=y1;j++){
          cin>>aa[i][j];
          }
          }
      
      cin>>x2>>y2;
       for(i=1;i<=x2;i++){
      for(j=1;j<=y2;j++){
          cin>>bb[i][j];
          }
          }
         for(i=1;i<=x1;i++){
            for(j=1;j<=y2;j++){
             cc[i][j]=0;
               for(k=1;k<=y1;k++){
                 cc[i][j]=cc[i][j]+aa[i][k]*bb[k][j];
                 }
             if(j!=y2)
             cout<<cc[i][j]<<" ";
             else cout<<cc[i][j]<<endl;
                 }
                 }
                               return 0;
                 }