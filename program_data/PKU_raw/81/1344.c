
int a[5][5];

void jiaohuan(int n,int m)
{
		int i,temp;
		for(i=0;i<5;i++)
		{
			temp=a[n][i];
			a[n][i]=a[m][i];
			a[m][i]=temp;
		}
}

int main()
{
	int i,j,n,m;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++) scanf("%d",&a[i][j]);
	scanf("%d %d",&n,&m);
	if(n>4||n<0||m>4||m<0) printf("error\n");
	else 
	{jiaohuan(n,m);
	for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++) printf("%d ",a[i][j]);
		printf("%d\n",a[i][4]);
	}
	}
	return 0;
}
