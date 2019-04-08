
int main(){
	int m,n,i,j;
	double sz[NUM][LEN];
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&n);
		double sum=0;
		for(j=0;j<n;j++){
			scanf("%lf",&sz[i][j]);
			sum+=sz[i][j];
		}
		double a;
		a=sum/n;
		sum=0;
		for(j=0;j<n;j++){
			sum+=(sz[i][j]-a)*(sz[i][j]-a);
		}
		sum=sum/n;
		sum=sqrt(sum);
		printf("%.5lf\n",sum);
	}
	return 0;
}