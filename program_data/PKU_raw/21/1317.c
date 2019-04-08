int main()
{
int n,i,a[100],j,t,c[100];
int s=0;
float max,m,b[100];
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
  s=s+a[i];
 }for(i=0;i<n;i++)
 {
  for(j=n-1;j>i;j--)
  {
   if(a[j]<a[j-1])
   {
    t=a[j-1];
    a[j-1]=a[j];
    a[j]=t;
   }
  }
 }
 for(i=0;i<n;i++)
 {
  m=(float)s/n;
  b[i]=a[i]-m;
  if(b[i]<0.0)
   b[i]=-b[i];
  
 }
 max=0.0;
 for(i=0;i<n;i++)
 {
  if(b[i]>=max)
  {
   max=b[i];
 
  
  }

 }j=0;
 for(i=0;i<n;i++)
 {
	 if(b[i]==max)
	 {
	 c[j]=a[i];
   j++;
	 }
 }
 
 printf("%d",c[0]);
 

 for(i=1;i<j;i++)
  {
printf(",%d",c[i]);  
  
 }
 
  return 0;
}
