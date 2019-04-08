int main(){
	int i,j;
	int m,n;
	scanf("%d",&m);
    double *sum=(double*)malloc(sizeof(double)*m);
	for(i=0;i<m;i++){
		scanf("%d",&n);
		if(n==1){
			sum[i]=2.0;
		}else if(n==2){
			sum[i]=3.5;
		}else{
			double *fenmu=(double*)malloc(sizeof(double)*n);
			double *fenzi=(double*)malloc(sizeof(double)*n);
			fenmu[0]=1;
			fenmu[1]=2;
			fenzi[0]=2;
			fenzi[1]=3;
			sum[i]=3.5;
				for(j=2;j<n;j++){
				fenmu[j]=fenmu[j-1]+fenmu[j-2];
				fenzi[j]=fenzi[j-1]+fenzi[j-2];
				sum[i]=sum[i]+(fenzi[j]/fenmu[j]);
			}
			free(fenzi);
			free(fenmu);

		}
	}
	for(i=0;i<m;i++){
		printf("%.3lf\n",sum[i]);
	}

return 0;
}