int main()
{
	char s[10000] , a[100] , b[100] ;
	gets(s);
	gets(a);
	gets(b);
	int n = strlen(s)-strlen(a) , m = strlen(a) , l = strlen(s) , k[10] , d = 0;
	for(int i = 0;i<=n;i++)
	{
		int c = 0;
		for(int j = 0;j<m;j++)
		{
			if(a[j] != s[j+i])
				c ++;
		}
		if(c == 0 && (int)s[i-1]==32)
		{
			k[d+1] = i;
			d++;
		}
		else if(c ==0 && (int)s[i]>=65 && (int)s[i]<=90)
		{
			k[d+1] = i;
			d++;
		}
	}
	k[0] = 0;
	k[d+1] = l;
	for(int q = k[0];q<k[1];q++)
		    printf("%c",s[q]);
	for(int r = 1;r<=d;r++)
	{
		printf("%s",b);
	    for(int g = k[r]+m;g<k[r+1];g++)
		    printf("%c",s[g]);
	}
	return 0;
}