int main(){
	int i,j,k,n;
	double a[100][100];
	double	c=0,b=0;
	scanf("%d",&k);
	for(i=0;i<k;i++){
		scanf("%d",&n);
		c=0;b=0;
		for(j=0;j<n;j++){
			scanf("%lf ",&a[i][j]);
			c+=a[i][j];}
		for(j=0;j<n;j++)
			b+=(a[i][j]-c/n)*(a[i][j]-c/n);
		printf("%.5lf\n",sqrt(b/n));
}}

		
