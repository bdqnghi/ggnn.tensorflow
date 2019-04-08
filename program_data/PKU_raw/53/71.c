void main()
{
int i,j,n,a[300],sum=0,b[300]={0},s;
scanf("%d",&n);
for (i=0;i<n;i++)scanf("%d",&a[i]);
for (i=0;i<n;i++)
{
s=1;
for(j=0;j<=sum;j++)
{
	if (b[j]==a[i])
	{
		s=0;
		break;
	}
}
if(s) 
{b[sum]=a[i];
sum++;
}
}

for(j=0;j<sum;j++)
{
	if(j!=sum-1)printf("%d,",b[j]);
    else printf("%d",b[j]);
}
}