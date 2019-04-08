void main()
{
	int change(int n,int m);
	void changing(int a[5][5],int n,int m);
	int n,m,i,j,flag,a[5][5];
	for(j=0;j<5;j++)
		for(i=0;i<5;i++)
			scanf("%d",&a[j][i]);
	scanf("%d%d",&n,&m);
	flag=change(n,m);
	if(flag==0) printf("error\n");
	else
	{
		changing(a,n,m);
		for(j=0;j<5;j++)
		{
			printf("%d",a[j][0]);
			for(i=1;i<5;i++)
				printf(" %d",a[j][i]);
			printf("\n");
		}
	}
}
int change(int n,int m)
{
	int f;
	if((n>=0&&n<5)&&(m>=0&&m<5)) f=1;
	else f=0;
	return(f);
}
void changing(int a[5][5],int n,int m)
{
	int i,b[5];
	for(i=0;i<5;i++)
	{
		b[i]=a[n][i];
		a[n][i]=a[m][i];
		a[m][i]=b[i];
	}
}
		

		
