void main()
{
	char s[101];
	int i, j;
	gets(s);
	for(i=strlen(s)-1; i>0; i--)
		if(s[i]!=' '&&s[i-1]==' ')
		{
			for(j=i; s[j]!=' '&&s[j]!='\0'; j++)
				printf("%c", s[j]);
			printf(" ");
		}
	for(i=0; s[i]!=' '&&s[i]!='\0'; i++)
		printf("%c", s[i]);
	printf("\n");
}