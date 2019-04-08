
int main()
{
	int n, l, i, k;
	char str[200]={0};
	scanf("%d\n", &n);
	while(n)
	{
		scanf("%s", str);
		puts(str);
		printf("\n");
		l=strlen(str);
		for(i=l-1; i>=0; i--)
		{
			if(str[i]=='(')
			{
				for(k=i; k<l; k++)
				{
					if(str[k]==')')
					{
						str[i]=' ';
						str[k]=' ';
						k=l;
					}
				}
			}
		}
		for(i=0;i<l;i++)
		{
			if(str[i]=='(')
			{
				str[i]='$';
			}
			else if(str[i]==')')
			{
				str[i]='?';
			}
			else
			{
				str[i]=' ';
			}
		}
		puts(str);
		n--;
	}
	return 0;
}