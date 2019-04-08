int main()
{
    int a[12683],b[12683];
	int i,j,n,k;
	scanf("%d\n",&n);
	for(i=0;i<=n-1;i++)
	{	scanf("%d",&a[i]);
	b[i]=1;
	}
for(j=n-1;j>=0;j--)
{
for(k=0;k<j;k++)
{
if(a[k]==a[j])
{b[j]=0;
break;}
else
b[j]=1;}}
printf("%d",a[0]);
for(j=1;j<=n-1;j++)
{if(b[j]==1)
{printf(" ");
printf("%d",a[j]);}}
return 0;
}

