int main()
{
	int k;
	int n[100];
	int j,i;
	double x[100][100];
	double s;
	double t;
	double h;
	scanf("%d",&k);
	for(i=0;i<k;i++){
		scanf("%d",&n[i]);
		for(j=0;j<n[i];j++){
			scanf("%lf",&x[i][j]);
		}
	}
	for(i=0;i<k;i++){
		t=0;
		for(j=0;j<n[i];j++){
			t=t+x[i][j];
		}
		t=t/n[i];
		s=0;
		for(j=0;j<n[i];j++){
			s=(x[i][j]-t)*(x[i][j]-t)+s;
		}
		h=sqrt(s/n[i]);
		printf("%.5lf\n",h);

	}
	return 0;
}