int main(){
  int n,i,k,e,t,s,a[50000],b[50000];
  scanf("%d",&n);
  for(i=0;i<n;i++){
     scanf("%d %d",&a[i],&b[i]);
  }
  for(k=1;k<=n;k++){
     for(i=0;i<n-k;i++){
        if(a[i]>a[i+1]){
        e=a[i];
        a[i]=a[i+1];
        a[i+1]=e;
        e=b[i];
        b[i]=b[i+1];
        b[i+1]=e;
        }
     }
  }
t=0;
s=0;
  for(i=1;i<n;i++){
     for(k=0;k<i;k++){
       if(b[k]>=a[i]){
        s=s+1;
       }
     }
     if(s!=0){
       t=t+1;
       s=0;
    }
  }
  if(t!=n-1){
    printf("no");
  }else{
   for(k=1;k<=n;k++){
     for(i=0;i<n-k;i++){
        if(b[i]<b[i+1]){
        e=b[i];
        b[i]=b[i+1];
        b[i+1]=e;
        }
     }
  }
   printf("%d %d",a[0],b[0]);
  }
  return 0;
}
