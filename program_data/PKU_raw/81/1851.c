int a[10][10];
int main()
{
	int process(int y,int z);
	int i,j,n,m;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
	scanf("%d%d",&m,&n);
	if(process(m,n))
	{
		for(i=0;i<5;i++)
		{
		for(j=0;j<5;j++)
		{
			printf("%d",a[i][j]);
			if(j!=4) printf(" ");
		}
		printf("\n");
		}
	}
	else printf("error\n");
	return 0;
}
int process(int y,int z)
{
	int k,temp;
	if((y>=0&&y<5)&&(z>=0&&z<5))
	{
		for(k=0;k<5;k++)
		{
			temp=a[y][k];
			a[y][k]=a[z][k];
			a[z][k]=temp;
		}
		return 1;
	}
	else return 0;
}

