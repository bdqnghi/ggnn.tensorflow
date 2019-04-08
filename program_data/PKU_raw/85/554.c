int main()
{
	char a[20][100];
	int i, j, n, flag;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%s",&a[i]);
	}
	for (i=0;i<n;i++)
	{
		flag=1;
		if ((a[i][0]>=65&&a[i][0]<=90)||(a[i][0]>=97&&a[i][0]<=122)||(a[i][0]>=128)||a[i][0]==95); 
		else flag=0;
		for (j=1;a[i][j]!='\0';j++)
		{
			if ((a[i][j]>=48&&a[i][j]<=57)||(a[i][j]>=65&&a[i][j]<=90)||(a[i][j]>=97&&a[i][j]<=122)||(a[i][j]>=128)||a[i][j]==95);
			else flag=0;
		}
		if (flag) printf("yes\n");
		else printf("no\n");
	}
	return 0;
}