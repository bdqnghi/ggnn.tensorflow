int main()
{
		int k,n[100],i,j;
	double x[100][100],a=0,b,c=0,d;
	scanf("%d",&k);
	for(i=0;i<k;i++){
		scanf("%d",&n[i]);
		for(j=0;j<n[i];j++){
			scanf("%lf",&x[i][j]);
		}
	}
	for(i=0;i<k;i++){
		a=0;
		for(j=0;j<n[i];j++){
			a+=x[i][j];
		}
		b=a/n[i];
		c=0;
		for(j=0;j<n[i];j++){
			c+=((x[i][j]-b)*(x[i][j]-b));
		}
		d=sqrt(c/n[i]);
		printf("%.5lf\n",d);
	}
	return 0;
}