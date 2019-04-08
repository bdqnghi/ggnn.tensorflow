
void main()
{
 int n,i,j,k,a[300];
 scanf("%d",&n);
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
   if(a[j]==a[i]&&j!=i)
   {
    for(k=j;k<n-1;k++)
     a[k]=a[k+1];
	j=j-1;
    n=n-1;
   }
 }
 for(i=0;i<n-1;i++)
  printf("%d,",a[i]);
 printf("%d\n",a[n-1]);
}