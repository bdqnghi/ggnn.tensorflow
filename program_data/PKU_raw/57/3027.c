
int main()
{
	int n,i,l,j;
		char str[30];
	scanf("%d",&n);


	for(i=0;i<n;i++)
	{
		l=0;
		scanf("%s",str);
		l=strlen(str);

		if(str[l-2]=='e'&&str[l-1]=='r')
		{
			for(j=0;j<l-2;j++)
			{
				printf("%c",str[j]);
			}
			printf("\n");
		}

		if(str[l-2]=='l'&&str[l-1]=='y')
		{
			for(j=0;j<l-2;j++)
			{
				printf("%c",str[j]);
			}
			printf("\n");
		}

		if(str[l-3]=='i'&&str[l-2]=='n'&&str[l-1]=='g')
		{
			for(j=0;j<l-3;j++)
			{
				printf("%c",str[j]);
			}
			printf("\n");
		}




	}
	
	
	return 0;
	
}