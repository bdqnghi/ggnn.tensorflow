int main()
{
	int i,j,k,n,a=0,b=0;
	int zhi(int x);
	scanf("%d",&n);
	for(i=6;i<=n;i++)
	{
		for(j=3;j<=i;j++)
		{
			if(zhi(j))
			{
				if(zhi(i-j))
				{
					a=j;b=i-j;break;
				}
			}
			j++;
		}
		printf("%d=%d+%d\n",i,a,b);
		i++;
	}
	return 0;
}

int zhi(int x)
{
	int i,e=0;
	for(i=2;i<=sqrt(x);i++){
		if(x%i==0){
			e=1;break;
	}}
	if(e==0)
		return (1);
	else
		return (0);
}

