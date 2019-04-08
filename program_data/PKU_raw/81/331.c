void main()
{
	int can(int n,int m);
	void change(int a[5][5],int n,int m);
	int i,j,m,n;
	int a[5][5];
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d %d",&n,&m);
	if(can(n,m))
	{
		change(a,n,m);
		for(i=0;i<5;i++)
		{
			for(j=0;j<4;j++)
			{
				printf("%d ",a[i][j]);
			}
			printf("%d",a[i][4]);
			printf("\n");
		}
	}
	if(can(n,m)==0)
		printf("error");
}
int can(int n,int m)
{
	
	if(n>=0&&n<5&&m>=0&&m<5)
	{
		return(1);
	}
	if(n<0||n>=5||m<0||m>=5)
	{
		return(0);
	}
}
void change(int a[5][5],int n,int m)
{
	int i,temp;
	for(i=0;i<5;i++)
	{
		temp=a[n][i];
		a[n][i]=a[m][i];
		a[m][i]=temp;
	}
}
