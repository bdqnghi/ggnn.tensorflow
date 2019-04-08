int main()
{
	int back(int x,int y);
	int x,y;
	scanf("%d %d",&x,&y);
	printf("%d\n",back(x,y));
	
	return 0;
}

int back(int x,int y)
{
	int a[100],b[100];
	int i=0,j;
	int n1,n2;
	while (x>0)
	{
		a[i]=x;
		x=x/2;
		i++;
	}
	n1=i;
	i=0;
	while (y>0)
	{
		b[i]=y;
		y=y/2;
		i++;
	}
	n2=i;
	for (i=0;i<n1;i++)
	{
		for (j=0;j<n2;j++)
		{
			if (a[i]==b[j])
			{
				return a[i];
				break;
			}
		}
	}
}