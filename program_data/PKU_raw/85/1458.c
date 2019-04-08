//?? C ???

//??????
int isKeyWord(char* str)
{
	int i;
	char *keyword[]=
					{
						"auto", "break", "case", "char", "const", "continue", "default",
						"do", "double", "else", "enum", "extern", "float", "for", "goto",
						"if", "int", "long", "register", "return", "short", "signed", 
						"sizeof", "static", "struct", "switch", "typedef", "union", "unsigned",
						"void", "volatile", "while"
					};
	
	for (i = 0; i < 32; i++)
	{
		if (strcmp(str, keyword[i]) == 0)
			return 1;
			
	}
	return 0;	
}

//??????C?????
int islegalIdentifier(char* str)
{
	char* p = str;
	if (isKeyWord(str))
		return 0;

	if (!((*p >= 'a' && *p <='z') || (*p >= 'A' && *p <='Z') || (*p == '_')))
		return 0;

	while (*p != '\0')
	{
		if (!((*p >= 'a' && *p <='z') || (*p >= 'A' && *p <='Z') || (*p == '_') || (*p >= '0' && *p <='9')))
			return 0;
		p++;
	}
	return 1;
}

int main()
{
	char buffer[21];
	int n, i;
	scanf("%d", &n);
	gets(buffer);

	for (i = 0; i < n; i++)
	{
		gets(buffer);
		if (islegalIdentifier(buffer))
			puts("yes");
		else
			puts("no");
	}

	return 0;
}
