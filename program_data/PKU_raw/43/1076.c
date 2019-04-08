int main()
{
	int m,i,j,n,k;
	scanf("%d",&m);
	for(i=3;i<=m;i=i+2)
	{
		j=m-i;
		for(n=2,k=0;n<i;n++)
		{
			if(i%n==0)
				k++;
		}
		if(k==0)
			for(n=2,k=0;n<j;n++)
		{
			if(j%n==0)
				k++;
		}
		if(k==0&&i<=j)
			printf("%d %d\n",i,j);
	}
		return 0;
}
