int main()
{
	int k, n[100], i, j;
    double x[100][100];
	double a[100]={0}, s[100]={0}, S[100]={0};
    scanf("%d", &k);
	for(i=0;i<k;i++){
		scanf("%d",&n[i]);
		for(j=0;j<n[i];j++){
			scanf("%lf", &x[i][j]);
		}
	}
    for(i=0;i<k;i++){
		for(j=0;j<n[i];j++){
           a[i]+=x[i][j]/n[i];
		}
	}
    for(i=0;i<k;i++){
		for(j=0;j<n[i];j++){
           s[i]+=(x[i][j]-a[i])*(x[i][j]-a[i]);
		}
	}
    for(i=0;i<k;i++){
		S[i]=sqrt(s[i]/n[i]);
	}
    for(i=0;i<k;i++){
		printf("%.5lf\n", S[i]);
	}
	return 0;
}
