// cg.cpp : Defines the entry point for the console application.
//

int main()
{
	int n,k,i,j;
	scanf("%d",&k);
	double sz[1000],sum=0,a,b,fj=0;
	double c;
	for(i=0;i<k;i++){
		scanf("%d",&n);
		for(j=0;j<n;j++){
			scanf("%lf",&sz[j]);
		}
		for(j=0;j<n;j++){
			sum+=sz[j];
		}
		a=sum/n*1.0;
		for(j=0;j<n;j++){
			b=(sz[j]-a)*(sz[j]-a);
			fj+=b;
		}
		c=sqrt(fj/n);	
	printf("%.5f\n",c);
	sum=0;
	fj=0;
	c=0;
	a=0;
	b=0;
	}
	return 0;
}

