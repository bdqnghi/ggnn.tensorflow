int sort(int a[],int k);
int main()
{
int n;
scanf("%d",&n);
int i,j;
int a[25];
for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}
int d[25];
for(i=n-1;i>=0;i--)
{
	d[i]=1;
  for(j=i+1;j<n;j++)
  {
    if(a[i]>=a[j]&&d[i]<d[j]+1)
		d[i]=d[j]+1;
  }
}
int max=0;
for(i=0;i<n;i++)
if(d[i]>max)
max=d[i];
printf("%d",max);
  
}