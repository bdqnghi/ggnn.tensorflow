
int amount(char c,char a[101])
{
	int i,amount=0;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==c)
			amount=amount+1;
	}
	return amount;
}

void match(char a[101])
{
	int i,j;
	int p,q;
	p=amount('(',a);
	q=amount(')',a);

	for(i=0;a[i]!='\0';i++)
		{
			if(a[i]=='(')
			{
				for(j=i+1;a[j]!='\0';j++)
				{
					if(a[j]=='(')
						break;
					else if(a[j]==')')
					{
						a[i]=' ';
						a[j]=' ';
						break;
					}
				}
			}
		}

	if(amount('(',a)<p||amount(')',a)<q)
		return match(a);

}

int main()
{
	char s[101];
	int i;
	for(;scanf("%s",s)!=EOF;)
	{
		printf("%s\n",s);
		match(s);
		for(i=0;s[i]!='\0';i++)
		{
			if(s[i]=='(')
				printf("$");
			else if(s[i]==')')
				printf("?");
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}


