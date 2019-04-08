int main()
{
	/*typedef struct _Parenthesis
	{
		char ch;
		int idx;
	} Parenthesis;*/
	int LeftParenIndex[100];
	char str[101];
	while(gets(str))
	{
		int i,top=0;
		puts(str);
		for(i=0; str[i]; i++)
		{
			if(str[i] == '(')
				LeftParenIndex[top++] = i;
			else if(str[i] == ')')
			{
				if(top == 0)
					str[i] = '?';
				else
				{
					str[i] = ' ';
					str[LeftParenIndex[--top]] = ' ';
				}
			}
			else
				str[i] = ' ';
		}
		for(i=0; i<top; i++)
			str[LeftParenIndex[i]] = '$';
		puts(str);
	}
	return 0;
}