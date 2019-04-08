int main( ){
    int i,n,j,m,k=0,sum=0,result;
    int x[10000],y[10000],z[50000];
    for(i=0;i<50000;i++){
    z[i]=0;
    }
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
    scanf("%d %d\n",&(x[i]),&(y[i]));
    }
 for(i=0;i<n;i++){
 for(j=x[i];j<y[i];j++){
      z[j]=1;
}
}
 while(k<=n){
      for(i=0;i<n-1;i++){
      m=i+1;
      if(x[i]>x[m]){
          j=x[i];
          x[i]=x[m];
          x[m]=j;
      }
      }
     k++;
    }
    k=0;
while(k<=n){
      for(i=0;i<n;i++){
      m=i+1;
      if(y[i]<y[m]){
          j=y[i];
          y[i]=y[m];
          y[m]=j;
      }
      }
     k++;
    }
    result=y[0]-x[0];
for(i=x[0];i<=y[0];i++){
    sum+=z[i];
}
 if(result==sum){
        printf("%d %d",x[0],y[0]);
    }else{
        printf("no");
    }
    return 0;
}
