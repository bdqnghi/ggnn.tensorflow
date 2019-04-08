void f(int p, int n)
{
	int i, j;
	int a[100];
	for (i=0; i<n; i++) 
		scanf("%d", &a[i]);
	for (i=1; i<n; i++) {
		for (j=1; j<n-i+1; j++) {
			if (a[j]<a[j-1]) {
				a[j-1]=a[j]+a[j-1];
				a[j]=a[j-1]-a[j];
				a[j-1]=a[j-1]-a[j];
			}
		}
	}
	for (i=0; i<n-1; i++)
		printf("%d ", a[i]);
	printf("%d", a[n-1]);
	if(p>0)
		printf(" ");
}
int main ()
{
	int i, n1, n2;
	scanf("%d%d", &n1, &n2);
	f(1, n1);
	f(0, n2);
	return 0;
}