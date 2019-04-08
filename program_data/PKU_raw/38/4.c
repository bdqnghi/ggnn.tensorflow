int main()
{
	int n,m;
	double sz[1000][100];
	double sum1[100]={0};
	double sum2[100]={0};
	double a;
	double s[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&m);
		for(int j=0;j<m;j++){
			scanf("%lf",&sz[j][i]);
			sum1[i]=sum1[i]+sz[j][i];
		}
		a=sum1[i]/(double)m;
		for(int l=0;l<m;l++){
			sum2[i]=sum2[i]+(sz[l][i]-a)*(sz[l][i]-a);
		}
		s[i]=sqrt(sum2[i]/(double)m);
	}
	for(int y=0;y<n;y++){
		printf("%.5lf\n",s[y]);
	}
	return 0;
}
