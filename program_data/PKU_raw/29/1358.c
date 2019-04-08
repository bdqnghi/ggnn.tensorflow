int main(){
	int m,n,e;
	scanf("%d",&m);
	double*za=(double*)malloc(sizeof(double)*m);
	
	for(int i=0;i<m;i++){
		scanf("%d",&n);
		int a=2,b=1;
		za[i]=0;
		for(int k=0;k<n;k++){
			za[i]+=1.0*a/b;
			e=a;
			a=a+b;
			b=e;
			
		}
	}
	for(int h=0;h<m;h++){
		printf("%.3lf\n",za[h]);
	}
	free(za);
	return 0;
}