
int ans[10000], a[100];

int main()
{
	int l, r, i, s, anses=0, bo, t;
	scanf("%d%d", &l, &r);
	while (l<=r)
	{
		bo=1;
		for (i=2; i*i<=l; i++) if (l%i==0) bo=0;
		for (s=l, t=0; s; s/=10) a[t++]=s%10;
		for (i=0; i<t/2; i++) if (a[i]!=a[t-i-1]) bo=0;
		if (bo) ans[++anses]=l;
		l++;
	}
	if (anses==0) printf("no");
	for (i=1; i<anses; i++) printf("%d,", ans[i]);
	if (anses) printf("%d", ans[anses]);
}
