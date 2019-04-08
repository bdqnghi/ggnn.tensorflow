int main()
{
	int k, n, i, j;
	double x[100], s, a, q=0, A=0;
	scanf("%d", &k);
	for(i=0; i<k; i++){
		A = 0;
		scanf("%d", &n);
		for(j=0; j<n; j++){
			scanf("%lf", &x[j]);
		}
		for(j=0; j<n; j++){
			A = A + x[j];
		}
		a = (double)A / n;
		q = 0;
		for(j=0; j<n; j++){
			q = q + (x[j]-a)*(x[j]-a);
		}
		s = sqrt(q/n);
		printf("%.5lf\n", s);
	}
	return 0;
}