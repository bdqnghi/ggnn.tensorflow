int main()
{
	int n, i;
	char s[255];
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%s", s);
		int len=strlen(s);
		char s1[255]={'\0'};
		for(int j=0;j<len;j++)
		{
			if(s[j]=='A')
			{
				s1[j]='T';
			}
			else if(s[j]=='T')
			{
				s1[j]='A';
			}
			else if(s[j]=='C')
			{
				s1[j]='G';
			}
			else if(s[j]=='G')
			{
				s1[j]='C';
			}
		}
		printf("%s\n", s1);
	}
	return 0;
}