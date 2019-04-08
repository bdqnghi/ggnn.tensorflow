int main() {
	int m,n;
	scanf("%d",&m);
	int i;
	int*cs=(int*)malloc(sizeof(int)*m);
	for(i=0;i<m;i++){
		scanf("%d",&cs[i]);
	}
	for(i=0;i<m;i++){
		int*sz=(int*)malloc(sizeof(int)*(cs[i]+1));
		int a=1;
		int b=2;
		int j;
		sz[0]=1;
		sz[1]=2;
		for(j=2;j<=cs[i];j++){
			sz[j]=sz[j-2]+sz[j-1];
		}
		double*sl=(double*)malloc(sizeof(double)*(cs[i]));
		for(j=0;j<cs[i];j++){
			sl[j]=1.0*sz[j+1]/sz[j];
		}
		double sum=0;
		for(j=0;j<cs[i];j++){
			sum+=sl[j];
		}
		printf("%.3lf\n",sum);
		free(sz);
		free(sl);
	}
	return 0;
}
