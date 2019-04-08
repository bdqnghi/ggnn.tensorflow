
int main()
{
	int n;
	int a[100],c[100];
	int i,b;
	int x=0;
	int y=0;

	scanf ("%d", &n);
	for (i=0; i<n; i++) {
		scanf ("%d", &a[i]);
	}
	for (i=0; i<n; i++) {
		b=a[i];
		if (b>x) {
			x=b;
		}
	}
	for (i=0; i<n; i++) {
		if (a[i]!=x){
			c[i]=a[i];
		}
	}
	for (i=0; i<n; i++) {
		b=c[i];
		if (b>y) {
			y=b;
		}
	}
	printf("%d\n",x);
	printf("%d\n",y);
	return 0;
}

