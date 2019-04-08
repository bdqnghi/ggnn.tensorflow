void main()
{
	int data[3][1100],n,i,j,max;
	for(n=1;;)
	{
		char c;
		scanf("%d%c",&data[1][n],&c);
		if(c=='\n')
			break;
		n++;
	}
	for(n=1;;)
	{
		char c;
		scanf("%d%c",&data[2][n],&c);
		if(c=='\n')
			break;
		n++;
	}
	printf("%d",n);
	for(j=1,max=0;j<=n;j++)
		if(data[1][j]<=0&&data[2][j]>0)
			max++;
	for(i=1;i<=1000;i++)
	{
		int temp;
		for(j=1,temp=0;j<=n;j++)
			if(data[1][j]<=i&&data[2][j]>i)
				temp++;
		if(max<=temp)
			max=temp;
	}
	printf(" %d",max);
}