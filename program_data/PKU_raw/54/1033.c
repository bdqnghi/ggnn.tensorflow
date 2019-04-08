int main()
{
	int apple(int n,int k);
	int n,k,m;
	scanf("%d%d",&n,&k);
	m=apple(n,k);
	printf("%d",m);
	return 0;
}

int apple(int n,int k)
{
	int x,y,i,t;
	for(x=1;;x++)
	{
		y=x*n+k;
		for(i=1;i<n;i++)
		{
			if(y%(n-1)!=0)
			{
				t=0;
				break;
			}
			else
			{
				y=y*n/(n-1)+k;
				t=1;
			}
		}
		if(t==1)
			return y;
		else
			continue;
	}
return y;
}