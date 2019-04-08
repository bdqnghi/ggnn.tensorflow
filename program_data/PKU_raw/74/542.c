int main()
{
	int m, n;
	scanf("%d%d", &m, &n);
	int ar[10]={0}, s=0, p=m;
	while(p) {
		ar[s++] = p % 10;
		p /= 10;
	}
	int i, j, k;
	int first = 1;
	for(i=m; i<=n; i++)
	{
		for(j=0; j<s/2; j++)
			if (ar[j] != ar[s-1-j]) break;
		if (j==s/2 && i%2)	{
			int prime=1;
			for(j=3;j<=sqrt((double)i);j+=2) {
				if (i%j==0)
				{
					prime =0;
					break;
				}
			}
			if (prime) {
				if (first) first = 0;
				else printf(",");
				printf("%d", i);
			}
		}
		j=0;
		while(ar[j] == 9) j++;
		ar[j]++;
		for(k=0; k<j; k++) ar[k] = 0;
		if (j == s) s++;
	}
	if (first) printf("no");
	return 0;
}