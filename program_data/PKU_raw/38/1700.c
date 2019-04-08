int main (){
	int i,n,k,z;
	double x[100],m1[100],a=0,e=0;
	scanf("%d",&k);
	for (z=0;z<k;z++){
		e=0;
		a=0;
		scanf("%d",&n);
		for (i=0;i<n;i++){
			scanf("%lf",&x[i]);
			a+=x[i];
		}
		a=a/n;
		for(i=0;i<n;i++){
			e+=(x[i]-a)*(x[i]-a);
		}
		e=e/n;
		m1[z]=pow(e,0.5);

	}
	for(z=0;z<k;z++){
		printf("%.5lf\n",m1[z]);
	}
	
	
	return 0;
}