
int main()
{
	int n;

	scanf("%d",&n);
	scanf("\n");
	
	while(n--)
	{
		char str[256];
		char pair[256];
		gets(str);
		int i;
		
		for(i=0;i<strlen(str);i++)
		{
			switch(str[i])
			{
			case 'A':
				pair[i]='T';
				break;
			case 'T':
				pair[i]='A';
				break;
			case 'G':
				pair[i]='C';
				break;
			case 'C':
				pair[i]='G';
				break;
			}
		}
		pair[i]='\0';
		puts(pair);
	}

	return 0;
}