void main()
{
	char str[11]={'\0'};
	char substr[4]={'\0'};
	char temp[10]={'\0'};
	int n,i,j,t,k;
	while (scanf("%s",str)!=EOF)
	{
		scanf("%s",substr);
	n=strlen(str);
	strcpy(temp,str);
	for(j=1;j<=n-1;j++)
	{
		for(i=0;i<n-j;i++)
		{
			if(temp[i]>temp[i+1])
			{
				t=temp[i];
				temp[i]=temp[i+1];
				temp[i+1]=t;
			}
		}
	}
	for (i=0;i<n;i++)
	{
		if(str[i]==temp[n-1])
		{
			k=i;
			break;
		}
	}
	for (i=0;i<=k;i++)
	{
		printf("%c",str[i]);
	}
	printf("%s",substr);
	for (i=k+1;i<n;i++)
	{
		printf("%c",str[i]);
	}
printf("\n");
	}
}

