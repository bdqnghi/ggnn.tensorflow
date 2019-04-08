int main()
{
	int	n;
	char**	p;
	int	i;
	int	j;
	int	k;
	scanf("%d", &n);
	p = (char**)malloc(sizeof(char*) * n);
	for (i=0; i<n; i++)
		p[i] = (char*) malloc(sizeof(char) * 21);
	for (i=0; i<n; i++)
		scanf("%s", p[i]);
	for (i=0; i<n; i++)
	{
		k = 1;
		if ( (p[i][0] >= 'A' && p[i][0] <= 'Z')
			|| (p[i][0] >= 'a' && p[i][0] <= 'z' )
			|| p[i][0] == '_')
		{
			for (j=1; j<strlen(p[i]); j++)
				if ( p[i][j] < '0'
					|| (p[i][j] > '9' && p[i][j] < 'A')
					|| (p[i][j] > 'Z' && p[i][j] < '_')
					|| (p[i][j] > '_' && p[i][j] < 'a')
					|| (p[i][j] > 'z'))
				{
					k = 0;
					break;
				}
		}
		else k = 0;
		printf("%s", k == 1 ? "yes\n" : "no\n");
	}
	return 0;
}