
int sz[5][5];
void exchange(int a,int b);
int main()
{

	
	int a,b,i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
			scanf("%d",&sz[i][j]);
	}
	scanf("%d %d",&a,&b);
	exchange(a,b);
	

	return 0;
}
void exchange(int m,int n)
{
	if(m>4||m<0||n>4||n<0)
		printf("error");
	else
	{
		int a[5];
		int k,t;
		for(k=0;k<5;k++)
		{
			a[k]=sz[m][k];
			sz[m][k]=sz[n][k];
			sz[n][k]=a[k];
		}
		for(k=0;k<5;k++)
		{
			for(t=0;t<4;t++)
				printf("%d ",sz[k][t]);
			printf("%d\n",sz[k][4]);
		}
	}
}
