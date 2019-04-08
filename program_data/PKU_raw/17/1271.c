int zuok(char c[],int j, int len)
{
	int i,zuo=1,you=0;
	for(i=j+1;i<len;i++)
	{
		if(c[i]=='(')
		{
			zuo++;
		}
		else if(c[i]==')')
		{
			you++;
		}
		if(zuo==you)
		{
			return 1;
		}
	}
	return 0;
}
int youk(char c[],int j,int len)
{
	int i,you=1,zuo=0;
	for(i=j-1;i>=0;i--)
	{
		if(c[i]=='(')
		{
			zuo++;
		}
		else if(c[i]==')')
		{
			you++;
		}
		if(zuo==you)
		{
			return 1;
		}
	}
	return 0;
}
		

int main()
{
	int n;
	scanf("%d", &n);

	getchar();

	int i;
	for(i=0;i<n;i++)
	{
		char c[200];
		scanf("%s", c);
		getchar();

		printf(c);

		printf("\n");

		int len=strlen(c);

		int j;

		for(j=0;j<len;j++)
		{
			if(c[j]=='(')
			{
				if(!zuok(c,j,len))
				{
					putchar('$');
				}
				else
					printf(" ");
			}

			else if(c[j]==')')
			{
				if(!youk(c,j,len))
				{
					putchar('?');
				}
				else
					putchar(' ');
			}

			else
			{
				putchar(' ');
			}
			
		}
		printf("\n");
	}
	return 0;
}






