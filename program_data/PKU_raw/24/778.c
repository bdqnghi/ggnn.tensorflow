
int main()
{
	char s[1000], *max, *min;
	gets(s);
	
	int i, mina=0, minb=50, maxa=0, maxb=0, ta=0, tb;
	int n = strlen(s);
	for(i=1; i<n+1; i++)
	{
		if(s[i] == ' ' || s[i] == '\0')
		{
			s[i] = '\0';
			tb = i;
			if(tb - ta > maxb - maxa)
			{
				maxb = tb;
				maxa = ta;
			}
			if(tb - ta < minb - mina)
			{
				minb = tb;
				mina = ta;
			}
			ta = tb + 1;
		}
	}
	max = &s[maxa];
	min = &s[mina];
	printf("%s\n%s", max, min);

	return 0;
}