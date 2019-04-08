int find(int n,int m)
{
	if ((n>=0) && (n<=4) && (m>=0) && (m<=4)) return(1);
	else return(0);
}
void main()
{
	int flag,i,j,m,n,swap,num[5][5];
	for (i=0;i<=4;i++)
		for (j=0;j<=4;j++) 
			scanf("%d",&num[i][j]);
	scanf("%d %d",&n,&m);
	if (find(n,m))
	{
		for (i=0;i<=4;i++)
		{
			swap=num[n][i];
			num[n][i]=num[m][i];
			num[m][i]=swap;
		}
		for (i=0;i<=4;i++)
		{
			flag=0;
			for (j=0;j<=4;j++) 
			{
				if (flag) printf(" ");
				else flag=1;	
				printf("%d",num[i][j]);
			}
			printf("\n");
		}
	}
	else printf("error");
}