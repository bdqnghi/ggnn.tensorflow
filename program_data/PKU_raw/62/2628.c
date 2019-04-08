int main()
{
	char s[number];
	int i, n, x;
    gets(s);
	for(i=0;i<255;i++)
	{
		if(s[i]==' '&&s[i+1]==' ')
		{
			for(n=i;n<255;n++)
				s[n]=s[n+1];
			i=i-1;
		}
	}
	puts(s);
	return 0;
} 