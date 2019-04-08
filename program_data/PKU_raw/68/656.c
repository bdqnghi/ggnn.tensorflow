
void main()
{
	int n,i,j,k,x,y;
	scanf("%d",&n);
	for(i=6;i<=n;i+=2)
	{
		for(x=3;x<=n/2;x++)
		{
			for(j=2;j<=sqrt(x);j++)
				if(x%j==0)
					break;
			if(j<=sqrt(x)) 
				continue;
			y=i-x;
			for(j=2;j<=sqrt(y);j++)
				if(y%j==0)
					break;
			if(j>sqrt(y))
			{
				printf("%d=%d+%d\n",i,x,y);
				break;
			}
		}
	}
}