int main()
{
	int a1,a2,b1,b2,c1,c2;
	int a[100][100],b[100][100],c[100][100]={{0,0}};
	scanf("%d %d",&a1,&a2);
	for (int n=0;n<a1;n++)
	{
		for(int i=0;i<a2;i++) scanf("%d",&a[n][i]);
	}
	scanf("%d %d",&b1,&b2);
	for (int n=0;n<b1;n++)
	{
		for(int i=0;i<b2;i++) scanf("%d",&b[n][i]);
	}
	for (int n=0;n<a1;n++)
	{
		for(int i=0;i<b2;i++)
		{
			for(int j=0;j<a2;j++)
			{
				c[n][i]+=a[n][j]*b[j][i];
			}
		}
	}
	for (int n=0;n<a1;n++)
	{
		printf("%d",c[n][0]);
		if(b2==1) printf("\n");
		for (int i=1;i<b2;i++)
		{
			printf(" %d",c[n][i]);
			if(i==b2-1) printf("\n");
		}
	}
	return 0;
}