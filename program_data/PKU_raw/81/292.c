changeline(int a[5][5],int m,int n)
{
	int i,t;
	if(m<=4&&n<=4)
	{
		for(i=0;i<5;i++)
		{
			t=a[n][i];a[n][i]=a[m][i];a[m][i]=t;
		}
		return(1);
	}
	else return(0);
}
void main()
{
	int a[5][5],i,j,m,n;	
	{	
		for(i=0;i<5;i++)
			for(j=0;j<5;j++)
				scanf("%d" ,&a[i][j]);
	}
	scanf("%d %d",&n,&m);
	if(changeline(a,m,n))
	{	for(i=0;i<5;i++)
			for(j=0;j<5;j++)
			{	
				printf("%d",a[i][j]);
				if(j!=4) printf(" ");
				else printf("\n");
			}
	}
			else
		printf("error\n");
}