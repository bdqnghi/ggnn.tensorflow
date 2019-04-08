
int main()
{
	int i, j, n, oper=0;
	scanf("%d", &n);
	char s[257];
	gets(s);
	for(i=0; i<n; i++)
	{
		gets(s);
		for(j=0; j<strlen(s); j++)
		{
			switch(s[j])
			{
			case 'C':
				s[j] = 'G';
				break;
			case 'G':
				s[j] = 'C';
				break;
			case 'A':
				s[j] = 'T';
				break;
			case 'T':
				s[j] = 'A';
				break;
			}
		}
		if(oper)
			printf("\n");
		oper = 1;
		printf("%s", s);
	}
	return 0;
}
