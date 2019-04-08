int main()
{
	int k;
	double b[1000];
	scanf("%d",&k);
	int i;
	for(i=0;i<k;i++){
		double sum=0;
		int a;
		scanf("%d",&a);
		int j;
		for(j=0;j<a;j++){
			scanf("%lf",&b[j]);
			sum=sum+b[j];
		}
		double c=0;
		for(j=0;j<a;j++){
			c=c+(b[j]-sum/a)*(b[j]-sum/a);
		}
		double s=0;
		s=sqrt(c/a);
		printf("%.5lf\n",s);
	}
	return 0;
}