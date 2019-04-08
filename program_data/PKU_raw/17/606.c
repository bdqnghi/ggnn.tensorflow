int main()
{
	
	char c[200],s[200];
	
	while(gets (c))
	{
    int a[200],tt = 0;
	puts(c) ;
	memset (s, 0, sizeof s) ;
	for(int i=0;i<strlen(c);i++)
		if (c[i] == '(')
			a[++tt] = i ;
		else if (c[i] == ')')
			if (!tt) s[i] = '?' ;
			else s[a[tt -- ]] = s[i] = ' ' ;
		else s[i] = ' ' ;
	for (int i = 1; i <= tt; i ++ ) s[a[i]] = '$' ;
	puts (s) ;
	}

	return 0;
}

