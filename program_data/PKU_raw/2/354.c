void main()
{
	char name[30]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ"},c[1000][100];
	int n,a[1000],num[100]={0},i,j,k,max=0,t;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
		scanf("%s",c[i]);
	}
	for (i=0;i<n;i++)
	{
		for (k=0;c[i][k]!='\0';k++)
		{
		for (j=0;name[j]!='\0';j++)
		{
			if (name[j]==c[i][k])
			{
				num[j]++;
			}
		}

		}
	}
	for (i=0;name[i]!='\0';i++)
	{
		if (num[i]>max)
		{
			max=num[i];
			k=i;
		}
	}
	printf("%c\n%d\n",name[k],num[k]);
	for (i=0;i<n;i++)
	{
		for (j=0;c[i][j]!='\0';j++)
		{
			if (c[i][j]==name[k])		
			{
				printf("%d\n",a[i]);
				break;
			}
		}
	}
}