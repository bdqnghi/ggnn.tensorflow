int main()
{
	char	s[100];
	char*	c = s;
	char*	k[50];
	int		kc = 0;
	int		i=0;
	gets(s);
	k[0] = (char*) malloc(sizeof(char)*100);
	for ( ; *c!=0; c++)
	{
		if ( *c != ' ' )
		{
			k[kc][i] = *c;
			i++;
		}
		else
		{
			k[kc][i] = 0;
			kc++;
			i=0;
			k[kc] = (char*) malloc(sizeof(char)*100);
		}
	}
	k[kc][i] = 0;
	for ( i=kc; i>=0; i--)
	{
		printf("%s", k[i]);
		if ( i!=0 ) printf(" ");
	}
	return 0;
}