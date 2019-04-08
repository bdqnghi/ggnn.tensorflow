int main()
{
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		char a[30];
		scanf("%s",a);
		int b;
		b=strlen(a);
		if(a[b-2]=='e')
		{
			int j;
			for(j=0;j<b-2;j++)
				printf("%c",a[j]);
			printf("\n");
		}
		if(a[b-2]=='l')
		{
			int j;
			for(j=0;j<b-2;j++)
				printf("%c",a[j]);
			printf("\n");
		}if(a[b-3]=='i' && a[b-2]=='n')
		{
			int j;
			for(j=0;j<b-3;j++)
				printf("%c",a[j]);
			printf("\n");
		}
	}
	return 0;
}