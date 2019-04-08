
int panduan (int n ,int m)
{
	if(n>4 || n<0 || m<0 || m>4)
		return(0);
	else if(n>=0 && n<=4 && m>=0 && m<=4)
		return(1);
	else return(2);
}

void main()
{
	int a[5][5];
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	int n,m;
	scanf("%d %d",&n,&m);
	int t[5];
	if(panduan(n,m)==1)
	{
		for(i=0;i<5;i++)
		{
			t[i]=a[n][i];
			a[n][i]=a[m][i];
			a[m][i]=t[i];
		}
		for(i=0;i<5;i++)
		{
			printf("%d",a[i][0]);
		     for(j=1;j<5;j++)
			 {
			      printf(" %d",a[i][j]);
			 }
			 printf("\n");
		}
	}
	else if(panduan(n,m)==0)
		printf("error\n");
}