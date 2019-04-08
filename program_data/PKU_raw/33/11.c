int main()
{
	int n;
	char s[300];
	int i;
	scanf("%d", &n);
	while(n--)
	{
		scanf("%s", s);
		i = 0;
		while(s[i] != '\0')
		{
			if(s[i] == 'A')
			printf("T");
			if(s[i] == 'T')
			printf("A");
			if(s[i] == 'G')
			printf("C");
			if(s[i] == 'C')
			printf("G");
			i++;
		}
		printf("\n");
	}
	return 0;
}