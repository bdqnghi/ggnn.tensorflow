
int main()
{
	int k,n,j,i;
	double t,sum1=0,sum2=0,a,s,x[100];
	scanf("%d",&k);
	for(j=0;j<k;j++){
		scanf("%d",&n);
		sum1=0;
		for(i=0;i<n;i++){
			scanf("%lf",&t);
			x[i]=t;
			sum1=sum1+x[i];
		}
		a=sum1/(double)n;
		sum2=0;
		for(i=0;i<n;i++){
			sum2=sum2+(x[i]-a)*(x[i]-a);
		}
		s=sqrt(sum2/(double)n);
		printf("%.5lf\n",s);
	}
	return 0;
}