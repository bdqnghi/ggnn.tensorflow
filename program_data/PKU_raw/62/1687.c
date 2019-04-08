int main()
{int i,l,j;
	char s[1000];
	gets(s);
	l=strlen(s);
	for (i=0;i<l;i++)
	{if (s[i]==' '&&s[i-1]==' ')
	{
		for (j=i;j<l-1;j++)
		{
			s[j]=s[j+1];
		}
		l=l-1;i=i-1;
		}
	}
		for (i=0;i<l;i++)
	{printf("%c",s[i]);
	}	
		return 0;
}
