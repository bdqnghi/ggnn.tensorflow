int array[5][5]={0};
int change(int m,int n)
{
	int i,t;
	if(n>=0&&n<5&&m>=0&&m<5)
	{
		for(i=0;i<5;i++)
		{
			t=array[n][i];
			array[n][i]=array[m][i];
			array[m][i]=t;
		}
		return 1;
	}
	else return 0;
}
int main()
{
	int i,j,n,m;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",&array[i][j]);
		scanf("%d %d",&n,&m);
		if(change(n,m))
		{
			for(i=0;i<5;i++)
				for(j=0;j<5;j++)
				{
					printf("%d",array[i][j]);
					if(j!=4)printf(" ");
					else printf("\n");
				}
		}
		else printf("error");
				return 0;
}
