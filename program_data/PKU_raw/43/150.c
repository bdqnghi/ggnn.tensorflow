int main()
{
	int zhishu(int x);
	int m,i,k,n,p;
	scanf("%d",&m);
	for(i=2;i<=m/2;i++)
	{
		n=m-i;
		k=zhishu(i);
		p=zhishu(n);
		if(p==1&&k==1)
			printf("%d %d\n",i,n);
	}
	return 0;
}
int zhishu(int x)
{
	int i,j,k;
	if(x==2)
		k=1;
	else
		for(i=2;i<x;i++)
		{
			j=x%i;
			if(j==0)
				{
					k=0;
				    break;
			}
			else
				if(i==x-1)
					k=1;
		}
		return k;
}
