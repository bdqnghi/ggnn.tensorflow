int a[100000]={0};
int f(int y)
{
	int t,i;
	t=sqrt(y);
    for(i=2;i<=t;i++)
	{
			if(y%i==0)
				break;
	}
	if(i>t)
	    return 1;
	else
		return 0;
}
int main(int argc, char* argv[])
{
	int n,z;
	scanf("%d",&n);
	int i,j,k,x=0;
	for(j=2;j<=n;j++)
	{
		k=sqrt(j);
		for(z=2;z<=k;z++)
		{
			if(j%z==0)
				break;
		}
		if(z>k)
		{
			a[x]=j;
			x++;
		}
	}
	for(i=6;i<=n;i+=2)
	{
		for(j=0;j<=x;j++)
		{
			if(f(i-a[j]))
			{
				printf("%d=%d+%d\n",i,a[j],i-a[j]);
				break;
			}
		}
		continue;

	}
	return 0;
}