int main(){
     int n,i,j,t,minL,maxR,m;
     
     maxR=0;
     m=0;
     int a[10000][2],c[10000];
     scanf("%d",&n);
     for(i=0;i<n;i++){
          for(j=0;j<2;j++){
               scanf("%d",&a[i][j]);
          }
     }
     minL=a[0][0];
     for(i=0;i<10000;i++){
     c[i]=0;
     }
     for(i=0;i<n;i++){
          if(minL>a[i][0]){
             minL=a[i][0];
          }
          if(maxR<a[i][1]){
             maxR=a[i][1];
          }
          for(t=a[i][0];t<=a[i][1]-1;t++){
          c[t]=1;
          }
     }
     for(t=minL;t<=maxR-1;t++){
          if(c[t]==0){
             printf("no");
             m=1;
             break;
          }
     }
     if(m==0){
        printf("%d %d",minL,maxR);
     }
     return 0;
}
