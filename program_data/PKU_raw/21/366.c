int main(int argc, char* argv[])
{
    int n,i,c[300],k;
    double a=0,b[300];
    scanf("%d",&n);
    for(i=0;i<n;i++){
    scanf("%d",&c[i]);
    a+=c[i];
 }
 a/=n;
    for(i=0;i<n;i++){
     b[i]=c[i]-a;
 }
    for(i=n-1;i>0;i--){
  for(k=0;k<i;k++){
   if(b[k]>b[k+1]){
   double t=b[k];
   b[k]=b[k+1];
   b[k+1]=t;}
  }
 }
 if(b[n-1]==0-b[0])
  printf("%.0lf,%.0lf",b[0]+a,b[n-1]+a);
 else if(b[n-1]<0-b[0])
  printf("%.0lf",b[0]+a);
else if(b[n-1]>0-b[0])
  printf("%.0lf",b[n-1]+a);
 return 0;
}
