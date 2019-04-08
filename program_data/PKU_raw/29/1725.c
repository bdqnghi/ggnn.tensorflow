int tiffany(int i)
{
	int diamond;
	if(i==1)
		diamond=2;
	else if(i==2)
		diamond=3;
	else
		diamond=tiffany(i-1)+tiffany(i-2);
	return diamond;
}
int chanel(int i)
{
	int pearl;
	if(i==1)
		pearl=1;
	else if(i==2)
		pearl=2;
	else
		pearl=chanel(i-1)+chanel(i-2);
	return pearl;
}
int main()
{
	int m,k,n,i,diamond,pearl;
	double jewel;
	scanf("%d",&m);
	for(k=1;k<=m;k++)
	{
		scanf("%d",&n);
		jewel=0;
		for(i=1;i<=n;i++)
		{
			diamond=tiffany(i);
			pearl=chanel(i);
			jewel+=(double)diamond/(double)pearl;
		}
		printf("%.3f\n",jewel);
	}
	
	return 0;
}