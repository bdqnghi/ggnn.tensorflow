
int main()
{
	int k,i,n[100],j;
	double s[100],sum,a,sum2;
	scanf("%d",&k);
	for(i=0;i<k;i++){
		scanf("%d",&n[i]);
		double x[100]={0};
		sum=0;
		for(j=0;j<n[i];j++){
			scanf("%lf",&x[j]);
			sum+=x[j];
		}
		a=sum/n[i];
		sum2=0;
		for(j=0;j<n[i];j++){
			sum2+=pow(x[j]-a,2);
		}
		s[i]=sqrt(sum2/n[i]);
	}
	for(i=0;i<k;i++){
		printf("%.5lf\n",s[i]);
	}
	return 0;
}