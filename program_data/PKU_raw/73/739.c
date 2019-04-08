int max(int a[5][5],int i)
{
	int k = 0;
	int p = 0;
	while(p<5)
	{
		if(a[i][p]>k)
			k = a[i][p];
		p++;
	}
	p = 0;
	while(p<5)
	{
		if(a[i][p] == k)
			return p;
		p++;
	}
}
int judge(int a[5][5],int y,int i)
{
	int j = 0;
	while(j<5)
	{
		if(j == i)
		{
			j++;
			continue;
		}
		else
		{
			if(a[j][y]<a[i][y])
				return 0;
		}
		j++;
	}
	return 1;
}
int main()
{
	int a[5][5];
	int x,y;
	for(int i = 0;i<5;i++)
		for(int j = 0;j<5;j++)
			scanf("%d",&a[i][j]);
	for(int i = 0;i<5;i++)
	{
		y = max(a,i);
		if(judge(a,y,i))
		{
			printf("%d %d %d", i+1,y+1,a[i][y]);
			return 0;
		}
	}
	printf("not found");
	return 0;
}