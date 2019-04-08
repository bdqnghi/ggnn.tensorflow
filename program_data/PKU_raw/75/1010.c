int main()
{
	int  i, j, t, c[1000] = {0}, d[1000] = {0}, e[1000] = {0}, s, h, p, q;
	char a[10000], b[10000];
	gets(a);
	gets(b);
	t = strlen(a);
	q = strlen(b);
	s = 0;
	h = 0;
	for (i = 0; i <= t; i++)
		if (a[i] == ',' || i == t)
		{
			p = 0;
			for (j = h; j < i; j++)
			{
				p = p*10 + a[j] - '0' ;
			    d[s] = d[s] + p;
			}
			s++;
			h = i + 1;
		}
	s = 0;
	h = 0;
	for (i = 0; i <= q; i++)
		if (b[i] == ',' || i == q)
		{
			p = 0;
			for (j = h; j < i; j++)
			{
				p = p*10 + b[j] - '0' ;
			    e[s] = e[s] + p;
			}
			h = i + 1;
			s++;
		}
    cout << s << " ";
	for (t = 1; t <= 1000; t++)
	    for (j = 0; j < s; j++)
			if ( d[j] <= t && t < e[j])
				c[t-1]++;
	j = 0;
    for (t = 0; t < 1000; t++)
	    if (j < c[t])
			j = c[t];
	cout << j;
	return 0;
}