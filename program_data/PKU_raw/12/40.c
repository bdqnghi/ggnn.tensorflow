
int main()
{
	int a[PI];
	int i,j,num,n;
	n=0;
	for (i=0;i<15;i++)
	{
		scanf("%d",&a[i]);
		n++;
		if (a[i]==0||a[i]==-1)
		{
			n--;
			break;
		}
	}

	do
	{

	num=0;
	for (i=0;i<n;i++)
	{
		for (j=i+1;j<n;j++)
		{
			if (a[j]==2*a[i]||a[j]*2==a[i])
			{
				num++;
			}
		}
	}
	printf("%d\n",num);

	n=0;
	for (i=0;i<=15;i++)
	{
		scanf("%d",&a[i]);
		n++;
		if (a[i]==0||a[i]==-1)
		{
			n--;
			break;
		}
	}
	}

	while(a[0]!=-1);

	return 0;
}