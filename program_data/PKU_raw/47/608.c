int main()
{
int n,i,a[100],k;
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(k=0;k<n;k++)
{
printf("%d",a[n-1-k]);
if(k!=n-1)
{printf(" ");
}
}
return 0;
}
