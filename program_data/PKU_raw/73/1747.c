int main()
{
	int n,i,j,k,m;
	int a[5][5];
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
	}
	for(i=0,n=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			for(k=0,m=0;k<5;k++)
			{
				if(a[i][j]<a[i][k]||a[i][j]>a[k][j])
				{m=1;break;}
			}
			if(m==0)
			{
				n++;
				printf("%d %d %d\n",i+1,j+1,a[i][j]);
			}
		}
	}
	if(n==0)
		printf("not found");
	return 0;
}