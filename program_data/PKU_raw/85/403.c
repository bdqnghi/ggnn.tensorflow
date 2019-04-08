void main()
{
	int n,i,j;
	char a[100][21];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
		if((a[i][0]>=65&&a[i][0]<=90)||a[i][0]==95||(a[i][0]>=97&&a[i][0]<=122))
		{
			for(j=1;j<21&&a[i][j]!='\0';j++)
			{
				if((a[i][j]>=48&&a[i][j]<=57)||(a[i][j]>=65&&a[i][j]<=90)||a[i][j]==95||(a[i][j]>=97&&a[i][j]<=122))
					continue;
				else
					break;
			}
			if(a[i][j]=='\0')
				printf("yes\n");
			else
				printf("no\n");
		}
		else
			printf("no\n");
	}
}
