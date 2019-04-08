int main()
{
int a[100000];
int x,n,i,j,k;
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
scanf("%d",&x);
k=0;
for(i=0;i<n-k;i++)
{
  while(a[i]==x)
  {
	  for(j=0;j<(n-k-i-1);j++)
		  a[i+j]=a[i+j+1];
	  k++;
	  if(i>=n-k)
		  break;
  }
}
for(i=0;i<(n-k-1);i++)
	printf("%d ",a[i]);
	printf("%d",a[i]);
return 0;
}