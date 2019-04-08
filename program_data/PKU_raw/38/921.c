int main()
{
	int k,n,i,j;
	double x[100][1000],a,s[100]={0};
	scanf("%d",&k);
	for(i=0;i<k;i++){
		a=0;
		scanf("%d",&n);
		for(j=0;j<n;j++){
			scanf("%lf",&x[i][j]);
		}
		for(j=0;j<n;j++){
			a=a+x[i][j];
		}
		a=a/n;
		for(j=0;j<n;j++){
			s[i]=s[i]+(x[i][j]-a)*(x[i][j]-a);
		}
		s[i]=s[i]/n;
		s[i]=sqrt(s[i]);
	}
	for(i=0;i<k;i++){
		printf("%.5lf\n",s[i]);
	}
	return 0;
}
			