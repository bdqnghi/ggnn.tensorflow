int main(){
	int n;
	scanf("%d",&n);
	for(int p=0;p<n;p++){
		int b;
		scanf("%d",&b);
		double x[100],he=0,a;
		for (int i=0;i<b;i++){
			scanf("%lf",&x[i]);
			he+=x[i];
		}
		a=he/b;
		double pfh=0;
		for(int i=0;i<b;i++){
			pfh+=(x[i]-a)*(x[i]-a);
		}
		double s;
		s=pow(pfh/b,0.5);
		printf("%.5lf\n",s);
	}
	return 0;
}


			

