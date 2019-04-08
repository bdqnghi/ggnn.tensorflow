int main(int argc, char* argv[])
{
	int k, n, i, j;
    double x[100], sum, a, b, s;
	scanf("%d", &k);
	for(i=0;i<k;i++){
		scanf("%d", &n);
		sum=0;
		a=0;
		b=0;
		s=0;
		for(j=0;j<n;j++){
			scanf("%lf", &x[j]);
            sum+=x[j];
		}
		a=sum / n;
        for(j=0;j<n;j++){
			b+=(x[j]-a)*(x[j]-a);
		}
		s=sqrt(b / n);
	    printf("%.5lf\n", s);
	}
	return 0;
}