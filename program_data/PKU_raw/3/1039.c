int main()
{
int n,k,i,j;
int sz[N];
int a[N];
scanf("%d%d",&n,&k);
for(i=1;i<=n;i++)
{
scanf("%d",&sz[i]);
a[i]=k-sz[i];
}
int found = 0;
for(i=1;i<=n;i++)
{
	for(j=1;j<=n;j++)
	{
		if(a[i]==sz[j])
		{
			found = 1;
			break;
		}
	}
	if (found == 1)
	{
		break;
	}
}
if (found == 1)
{
	printf("yes");
}
else
{
	printf("no");
}
return 0;
}