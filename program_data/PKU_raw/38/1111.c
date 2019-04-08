
int main(int argc, char* argv[])
{
	int n, m;
	int i, j;
	scanf("%d", &n);
	double x[1000], a=0;
	double b=0, s;
	for(i=0;i<n;i++){
		scanf("%d", &m);
		a=0;
		b=0;
		for(j=0;j<m;j++){
		scanf("%lf", &x[j]);
		a+=x[j];}
		for(j=0;j<m;j++){
			b+=pow((x[j]-a/m),2);}
		s=pow((b/m),0.5);
        printf("%.5lf\n", s);
	}

	return 0;
}