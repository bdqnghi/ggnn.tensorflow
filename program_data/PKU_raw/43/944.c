int main()
{
	int	m,i=3,i1=2,i2=2,x,y;
	double k ,l;
	scanf("%d",&m);
	for(;i<=m/2;i=i+2)
	{
		k=sqrtf(i);
		for(i1=2;i1<=k;i1++)
		{
			if(i%i1==0)
			{
				x=i1;
				break;
			}
		}
		if(i%x==0)
			continue;
		l=sqrtf(m-i);
		for(i2=2;i2<=l;i2++)
		{
			if((m-i)%i2==0)
			{
				y=i2;
				break;
			}
		}
		if((m-i)%y==0)
			continue;
		printf("%d %d\n",i,m-i);
	}
}