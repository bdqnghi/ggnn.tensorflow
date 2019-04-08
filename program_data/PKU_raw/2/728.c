
int main()
{
	int n, i,l,j,t,k[30][99],a[30],o,q,max=0,maxman;
	for(i=0;i<30;i++)
		a[i]=0;
	char s[40];
	scanf("%d", &n);
	for(j=0; j<n; j++)
	{
		scanf("%d %s",&o,s);
		l=strlen(s);
		for(i=0; i<l; i++)
		{
			q = s[i]-'A';
			a[q]++;
			t=a[q];
			k[q][t]=o;
		}
	}
	for(i='A'-'A';i<='Z'-'A';i++)
	{
		if(a[i]>max)
		{
//		printf("%d,%d\n",a[i],i);
			max = a[i];
		maxman = i;
		}
	}
	printf("%c\n%d\n",maxman+'A',max);
	for(i=1;i<=max;i++)

	printf("%d\n",k[maxman][i]);


	return 0;
}
