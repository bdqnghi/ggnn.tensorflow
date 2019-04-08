
int main()
{
	struct people
	{
		int x,y;
	}
	a[60000];
	int n,i=-1;
	int count=-1;
	int j,k;
	int elite=0;
	int num=0;
	scanf("%d",&n);
	do
	{
		i++;
		count++;
		scanf("%d %d",&a[i].x,&a[i].y);
	}
	while (a[i].x!=0 || a[i].y!=0);
	for (i=0;i<count;i++)
	{
		for (j=0;j<count;j++)
		{
			if (a[j].y==a[i].y)
			{
				num++;
			}
		}
		if (num==n-1)
		{
			for (k=0;k<count;k++)
			{
				if (a[k].x!=a[i].y)
				{
					elite++;
				}
			}
			if (elite==count)
			{
				printf("%d\n",a[i].y);
				return 0;
			}
			else
			{
				elite=0;
				num=0;
			}
		}
		else
		{
			elite=0;
			num=0;
		}
	}
	printf("NOT FOUND\n");
	return 0;
}