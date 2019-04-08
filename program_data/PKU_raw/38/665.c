
int main()
{
	int k,i,n,m;
	double a[10000],sum1,sum2,s;
	scanf("%d",&k);
	for(i=0;i<k;i++){
		sum1=0;
		sum2=0;
		scanf("%d",&n);
		for(m=0;m<n;m++){
			scanf("%lf",&a[m]);
			sum1+=a[m];
		}
		sum1=(double)sum1/n;
		for(m=0;m<n;m++){
			sum2=sum2+(a[m]-sum1)*(a[m]-sum1);
		}
		sum2=(double)sum2/n;
		s=(double)sqrt(sum2);
		printf("%.5lf\n",s);
	}

	return 0;
}
