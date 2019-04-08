int main(int argc, char* argv[])
{
	int k,i;
	scanf("%d",&k);
	for(i=0;i<k;i++){
		int n,j,l;
		double x[100],a=0.0,b,c,d=0.0,e,s;
		scanf("%d",&n);
		for(j=0;j<n;j++){
			scanf("%lf",&x[j]);
			a=a+x[j];
		}
		b=a/n;
		for(l=0;l<n;l++){
			c=(x[l]-b)*(x[l]-b);
			d=d+c;
		}
		e=d/n;
		s=sqrt(e);
		printf("%.5lf\n",s);
	}
	return 0;
}

