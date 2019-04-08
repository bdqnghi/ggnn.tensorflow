int main()
{int n,i,m,s,t;
 int a[100],b[100],c[100];
 for(i=0;i<100;i++){
 c[i]=0;}
 scanf("%d",&n);
 for(i=0;i<n;i++){
 scanf("%d%d",&a[i],&b[i]);
 if(a[i]>=90&&a[i]<=140&&b[i]>=60&&b[i]<=90){
 a[i]=1;}
 else{
 a[i]=0;}
 }
 m=0;
 s=0;
 for(i=0;i<n;i++){
 if(a[i]==1){
 s=s+1;
 c[m]=s;}
 if(a[i]==0){
 m=m+1;
 s=0;
 }}
 t=c[0];
 for(i=0;i<n;i++){
 if(c[i]>t){
 t=c[i];}}
 printf("%d",t);
 return 0;
 }
