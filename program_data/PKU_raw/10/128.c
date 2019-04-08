int max(int x,int y);
int max(int x,int y)
{
	int z;
	if(x>y)
		z=x;
	else
		z=y;
	return(z);
}

int main()
{
	int a[25]={0};
	int c[25];
	int Height,k;
	int n;
	scanf("%d",&k);
	{
		for(n=0;n<k;n++)
		{
			scanf("%d",&Height);
			a[n]=Height;
			c[n]=1;
		}
	}
	int i,j;
	for(i=k-2;i>=0;i--)
	{	
		for(j=i+1;j<=k-1;j++)
		{
			if((a[j]<=a[i]) && (c[i]<c[j]+1))
				c[i]=c[j]+1;
		}
	}

	int cMax=c[0];
	{
		for(i=0;i<=k-1;i++)
		{
			cMax=cMax>c[i]?cMax:c[i];
		}
		printf("%d",cMax);
	}
	return 0;
}


