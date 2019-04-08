int main()
{
	char str[1000];	
	int l, i, j, d;
	while(1)
	{
		gets(str);
		if(str[0] == '\0')
			break;
		puts(str);
		l =	strlen(str);
		for(i = 0; i < l; i++)
		{
			if(str[i] == ' ') continue;
			if(str[i] != '(' && str[i] != ')')
				str[i] = ' ';
			else if(str[i] == '(')
			{
				d = 1;
				for(j = i + 1; j < l; j++)
				{
					if(str[j] == '(') d++;
					if(str[j] == ')') d--;
					if(d == 0)
					{
						str[i] = ' ';
						str[j] = ' ';
						break;
					}
                }
			}
		}
		for(i = 0; i < l; i++)
			if(str[i] == '(')
				printf("$");
			else if(str[i] == ')')
				printf("?");
			else
				printf("%c", str[i]);
		printf("\n");
		for(i = 0; i < l; i++)
			str[i] = '\0';
	}
	return 0;
}
