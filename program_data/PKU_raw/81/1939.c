void function(int num[5][5],int n,int m)
{
	int i,j;
if((n<5&&n>=0)&&(m<5&&n>=0))
{
for(i=0;i<=4;i++)
{
	if(i==n)	
	{
		for(j=0;j<=3;j++)
		printf("%d ",num[m][j]);
		printf("%d\n",num[m][4]);
	}
	else if(i==m)	
	{
		for(j=0;j<=3;j++)
		printf("%d ",num[n][j]);
		printf("%d\n",num[n][4]);
	}
	else 
	{
		for(j=0;j<=3;j++)
		printf("%d ",num[i][j]);
		printf("%d\n",num[i][4]);
	}
}
}
else printf("error\n");
}
void main()
{
	int num[5][5]={0};
	int n,m,i,j;
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=4;j++)
			scanf("%d",&num[i][j]);
	}
	scanf("%d %d",&n,&m);
	function(num,n,m);
}