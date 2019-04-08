int f(int n,int m,int (*p)[5])
{
	int t,i;
	if(0<=m&&m<5&&0<=n&&n<5)
	{
		for(i=0;i<5;i++)
		{
			t=*(*(p+m)+i);
			*(*(p+m)+i)=*(*(p+n)+i);
			*(*(p+n)+i)=t;
		}
		return 1;
	}
	else return 0;
}
int main()
{
	int a[5][5];
	int i,j,flag,n,m;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",*(a+i)+j);
	scanf("%d %d",&n,&m);
	flag=f(n,m,a);
	if(flag==0)
		printf("error\n");
	else
	{
		for(i=0;i<5;i++)
			for(j=0;j<5;j++)
			{
				printf("%d",a[i][j]);
				if(j==4) printf("\n");
				else printf(" ");
			}
	}
	return 0;
}