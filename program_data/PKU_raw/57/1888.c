int main()
{
	int n,len;
	char a[1000];
	scanf("%d",&n);

	for(int i=0;i<n;i++)
	{
		scanf("%s",a);
		len=strlen(a);
		if(a[len-1]=='r')
		{
			for(int j=0;j<len-2;j++)
				printf("%c",a[j]);
		}
		printf("\n");
		if(a[len-1]=='y')
		{
			for(int p=0;p<len-2;p++)
				printf("%c",a[p]);
		}
         printf("\n");
		if(a[len-1]=='g')
		{
			for(int q=0;q<len-3;q++)
				printf("%c",a[q]);
		}
        printf("\n");

	}



	return 0;
}