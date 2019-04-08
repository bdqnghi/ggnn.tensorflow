int main ( )
{
   int n,i,a[100],j,c[100],d[100];
   double b[100];
   scanf("%d",&n);
   for(i=0;i<n;i++){
   scanf("%d",&a[i]);}
   for(i=0;i<n;i++){
   b[i]=0.0;
   for(j=0;j<a[i];j++){
   if(j==0){
   d[0]=2;
   c[0]=1;}
   if(j>0){
   d[j]=d[j-1]+c[j-1];
   c[j]=d[j-1];}
   b[i]+=(double)d[j]/(double)c[j];}
   printf("%.3lf\n",b[i]);}
   return 0;
}
   