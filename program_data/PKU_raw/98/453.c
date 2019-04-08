int main()
{
	int n=0;
	scanf("%d",&n);
	int i=0;
	char s[40];
	int length=0;
	int len=0;
	for(i=0;i<n;i++)
	{
		scanf("%s",s);
		len=strlen(s);
		length+=len;
		if(length<MAX)
		{
			if(length!=len)
			{
				printf(" ");
				length++;
			}
			printf(s);
		}
		else
		{
			printf("\n");
			length=len;
			printf(s);
		}
	}
	return 0;
}