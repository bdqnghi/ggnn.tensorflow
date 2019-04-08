int main()
{
	int n,a;
	double b[100],c,d,pj;
	double s;
	c=0;
	d=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a);
		for(int k=0;k<a;k++){
			scanf("%lf",&b[k]);
			d=d+b[k];
		}
		pj=d*1.0/(a*1.0);
		for(int z=0;z<a;z++){
			c+=(b[z]-pj)*(b[z]-pj);
		}
		s=sqrt(c*1.0/(a*1.0));
		printf("%.5lf\n",s);
		d=0;
		c=0;
	}
	return 0;
}