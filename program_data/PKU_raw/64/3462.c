int main(){
     int n,i,j,N,k,t;
     int a[11][4],b[50][7];
     double d[50],e;
     scanf("%d",&n);
     N=n*(n-1)/2;
     for(i=1;i<=n;i++){
          for(j=1;j<=3;j++){
               scanf("%d",&a[i][j]);
          }
     }
           t=1;
           for(i=1;i<n;i++){

                 for(j=i+1;j<=n;j++){                 b[t][3]=a[i][3];
                 b[t][1]=a[i][1];
                 b[t][2]=a[i][2];
                 b[t][6]=a[j][3];
                 b[t][4]=a[j][1];
                 b[t][5]=a[j][2];  
                  t++;                  
                 }
           }
    
     for(t=1;t<=N;t++){
           d[t]=sqrt((b[t][3]-b[t][6])*(b[t][3]-b[t][6])+(b[t][1]-b[t][4])*(b[t][1]-b[t][4])+(b[t][2]-b[t][5])*(b[t][2]-b[t][5]));
     }
     for(k=N;k>0;k--){
          for(i=1;i<k;i++){
               if(d[i]<d[i+1]){
                  e=d[i];
                  d[i]=d[i+1];
                  d[i+1]=e;
                  for(j=1;j<=6;j++){
                       e=b[i][j];
                       b[i][j]=b[i+1][j];
                       b[i+1][j]=e;
                  }
               }
          }
     }
     for(i=1;i<=N;i++){
          printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",b[i][1],b[i][2],b[i][3],b[i][4],b[i][5],b[i][6],d[i]);
     }
     return 0;
}