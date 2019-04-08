int a[5][5],b[5];
int f(int n,int m)
{
	int i,j,k;
	if(m>=5||n>=5)
		return 0;
	else
	{
		for(i=0;i<5;i++)
		{
			b[i]=a[n][i];
			a[n][i]=a[m][i];
			a[m][i]=b[i];
		}
		return 1;
	}
}




int main(int argc, char* argv[])
{
    int m,n;
	int i,j,k;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
	scanf("%d%d",&n,&m);
	if(f(n,m)==0)
		printf("error\n");
	else
		for(i=0;i<5;i++)
		{	for(j=0;j<4;j++)
			{
				printf("%d ",a[i][j]);
			}
			printf("%d\n",a[i][4]);
		}
			
	return 0;
}
