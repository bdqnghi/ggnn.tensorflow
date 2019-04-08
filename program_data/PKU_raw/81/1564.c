void main()
{
	int b,n,m,a[5][5],i,j;
	int decide(int n,int m);
	void change(int n,int m,int a[5][5]);
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
		scanf("%d%d",&n,&m);
	b=decide(n,m);
	if(b==0)
		printf("error");
	if(b==1)
		change(n,m,a);
}
int decide(int n,int m)
{
	int a;
	if(n>=0&&n<5&&m>=0&&m<5)
		a=1;
	else a=0;
	return(a);
}
void change(int n,int m,int a[5][5])
{
	int b,i,j;
	for(j=0;j<5;j++)
	{
		b=a[n][j];
		a[n][j]=a[m][j];
		a[m][j]=b;
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++)
			printf("%d ",a[i][j]);
		printf("%d\n",a[i][4]);
	}
}