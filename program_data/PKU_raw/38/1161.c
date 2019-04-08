int main()
{
	double x[1000], a, z, s, S[100];
	int n, i, e, f;
	scanf("%d", &n);
    for(e=0;e<n;e++){
		scanf("%d", &i);
		z=0;
		s=0;
		for(f=0;f<i;f++){
			scanf("%lf", &x[f]);
            z+=x[f];
		}
		a=z/i;
		for(f=0;f<i;f++){
            s+=pow(x[f]-a,2);
		}
        S[e]=pow(s/i,0.5);
	}
	for(e=0;e<n;e++)
		printf("%.5lf\n", S[e]);
	return 0;
}