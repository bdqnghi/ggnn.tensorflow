
int define(int m,int n)
{
	if(m<=4&&n<=4)
	{
		return 1;
	}else
		return 0;
}

void main()
{
	int m,n,i,j,a[5][5],b[5]={0};
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=4;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d %d",&m,&n);
	if(define(m,n)==1)
	{
		for(i=0;i<=4;i++)
		{
			b[i]=a[m][i];
			a[m][i]=a[n][i];
			a[n][i]=b[i];
		}
		for(i=0;i<=3;i++)
		{
			printf("%d %d %d %d %d\n",a[i][0],a[i][1],a[i][2],a[i][3],a[i][4]);
		}printf("%d %d %d %d %d",a[4][0],a[4][1],a[4][2],a[4][3],a[4][4]);
	}else printf("error");
}