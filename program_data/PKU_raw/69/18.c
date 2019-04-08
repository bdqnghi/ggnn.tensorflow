void main()
{
	char s1[250], s2[250];
	int a[250], b[250], c[250];
	int len1, len2, len, i;
	
	for ( i = 0; i < 250; i++)
	{
		a[i] = 0;
		b[i] = 0;
		c[i] = 0;
	}

	scanf ( "%s", s1);
	scanf ( "%s", s2);

	len1 = strlen (s1);
	len2 = strlen (s2);

	if ( len1 < len2)
		len = len2;
	else
		len = len1;

	for ( i = 0; i < len1; i++)
	{
		a[i] = s1[len1 - 1 - i] - '0';
	}
	
	for ( i = 0; i < len2; i++)
	{
		b[i] = s2[len2 -1 -i] - '0';
	}

	for ( i = 0; i < len; i++)
	{
		a[i] += b[i];
		if ( a[i] >= 10)
		{
			a[i+1]++;
			a[i] -= 10;
		}
	}
	if ( a[len] > 0)
		len++;

	while ( a[len - 1] == 0 && len >1)
		len--;


	for ( i = len; i > 0; i--)
	{
		printf ("%d", a[i-1]);
	}
}

