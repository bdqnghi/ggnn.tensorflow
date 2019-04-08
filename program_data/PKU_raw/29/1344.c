int main()
{
	int m,u;
	scanf("%d", &m);
	int n,i;
	for(u=0;u<m;u++){
		double s=0;
                  	double a=2,b=1;
		scanf("%d", &n);
		for(i=0;i<n;i++){
			double t=0;
			s+=a/b;
			t=a;
			a+=b;
			b=t;
		}
		printf("%.3lf\n", s);
	}
	return 0;
}
