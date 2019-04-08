
int jiaohuan(int a[][5],int m,int n)
{
	int temp,i;
	if(m>4)
		return(0);
	else if(n>4)
		return(0);
	else
	{
		for(i=0;i<5;i++)
		{
			temp=a[m][i];
			a[m][i]=a[n][i];
			a[n][i]=temp;
		}
		return(1);
	}
}

int main()
{
	int a[5][5],n,m,i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
	}	
	scanf("%d %d",&n,&m);
	i=jiaohuan(a,m,n);
	if(i==0)
		printf("error");
	else
	{
		for(i=0;i<5;i++)
		{
			for(j=0;j<4;j++)
				printf("%d ",a[i][j]);
			printf("%d\n",a[i][4]);
		}
	}
}