int process(int a[][5],int m,int n)
{
	int re,i,temp;
	if(m>-1&&m<5&&n>-1&&n<5)
	{
		for(i=0;i<5;i++)
		{
			temp=a[m][i];
			a[m][i]=a[n][i];
			a[n][i]=temp;
		}
		re=1;
	}
	else
		re=0;
	return re;
}
void main()
{
	int re,m,n,a[5][5],i,j;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
	scanf("%d %d",&m,&n);
	re=process(a,m,n);
	if(re==0)
        printf("error");
	else
		for(i=0;i<5;i++)
		{
			for(j=0;j<4;j++)
				printf("%d ",a[i][j]);
			printf("%d\n",a[i][j]);
		}
}