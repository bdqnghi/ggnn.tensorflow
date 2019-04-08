int check (int a)
{
	int i;
	double k;
	k=sqrt(a);
	for (i=2; i<=k; i++)
		if (a%i==0) break;
	if (i>k) return 1;
	else return 0;
}
int main ()
{
	int n, i;
	scanf ("%d", &n);
	if (n<=4) printf ("empty");
	for (i=3; i+2<=n; i=i+2)
		if (check(i)==1 && check(i+2)==1)
			printf ("%d %d\n", i, i+2);
	return 0;
}