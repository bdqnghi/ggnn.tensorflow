int main()
{
	int n;
	scanf("%d",&n);
	char **a;
	a=(char **)malloc(sizeof(char *)*n);
	int i,j;
	for(i=0;i<n;i++)
	{
		a[i]=(char *)malloc(sizeof(char)*100);
		scanf("%s",a[i]);
		//gets(a[i]);
	}
	//for(i=0;i<n;i++)
		//puts(a[i]);
	int flag=1;
	for(i=0;i<n;i++)
	{
		if((a[i][0]==95)||(a[i][0]>=65&&a[i][0]<=90)||(a[i][0]>=97&&a[i][0]<=122))
		{
			for(j=1;j<(int)strlen(a[i]);j++)
			{
				if((a[i][j]>=48&&a[i][j]<=57)||(a[i][j]>=65&&a[i][j]<=90)||(a[i][j]>=97&&a[i][j]<=122)||a[i][j]==95)
					continue;
				else
				{
					printf("no\n");
					break;
				}
			}
			if(j==(int)strlen(a[i]))
			   printf("yes\n");
		}

		else
			printf("no\n");
	}
	return 0;
}



   