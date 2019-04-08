int main()
{
	int n;
	scanf("%d\n",&n);
	char a[200];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%s",a);
		printf("%s\n", a);
		int j;
		for(j=0;j<strlen(a);j++)
		{
			if(a[j]==')')
			{
				int s;
				for(s=j-1;s>=0;s--)
				{
					if(a[s]=='(')
					{
						a[s]=' ';
						a[j]=' ';
						break;
					}
				}
			}
		}
		for(j=0;j<strlen(a);j++)
		{
			if(a[j]==')')
				printf("?");
			else if(a[j]=='(')
				printf("$");
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}