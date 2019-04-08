int main(){
  int n,i,j=0,m,a[N][2],b[N],c[N]={0};
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&a[i][0]);
    scanf("%d",&a[i][1]);
    if(a[i][0]<=140&&a[i][0]>=90&&a[i][1]<=90&&a[i][1]>=60){
      b[i]=1;
    }else{
      b[i]=0;
    }
  }
  for(i=0;i<n;i++){
    while(j<n){
      if(b[j]==1){
        c[i]++;
        j++;
      }else{
        j++;
        break;
      }
    }
  }
  for(i=0;i<n;i++){
    for(j=0;j<n-i;j++){
      if(c[j]<c[j+1]){
        m=c[j];
        c[j]=c[j+1];
        c[j+1]=m;
      }
    }
  }
  printf("%d",c[0]);
  return 0;
}