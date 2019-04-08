int s[5][5];
int Huan(int a,int b)
{
	int i,j;
	if(a<0||a>4||b<0||b>4)
	{
		printf("error\n");
		return 0;
	}
	else
	{
		for(i=0;i<a;i++)
		{
			for(j=0;j<4;j++)
				printf("%d ",s[i][j]);
			printf("%d\n",s[i][4]);
		}
		for(j=0;j<4;j++)
			printf("%d ",s[b][j]);
		printf("%d\n",s[b][4]);
		for(i=a+1;i<b;i++)
		{
			for(j=0;j<4;j++)
				printf("%d ",s[i][j]);
			printf("%d\n",s[i][4]);
		}
		for(j=0;j<4;j++)
			printf("%d ",s[a][j]);
		printf("%d\n",s[a][4]);
		for(i=b+1;i<5;i++)
		{
			for(j=0;j<4;j++)
				printf("%d ",s[i][j]);
			printf("%d\n",s[i][4]);
		}
		return 1;
	}
}
int main()
{
	int i,j,m,n,t;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",&s[i][j]);
		scanf("%d%d",&m,&n);
		if(m>n)
		{
			t=m;
			m=n;
			n=t;
		}
		Huan(m,n);
		return 0;
}
