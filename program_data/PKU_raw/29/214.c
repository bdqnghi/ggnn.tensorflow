int main()
{
	int i,j,m,zi[1000],mu[1000],n[1000];
	float shu[1000],sum[1000];
    scanf("%d",&m);
	for(i=0;i<m;i++){
		sum[i]=0;
		scanf("%d",&n[i]);
		zi[0]=2;
		zi[1]=3;
		mu[0]=1;
		mu[1]=2;
		for(j=0;j<n[i];j++){
			zi[j+2]=zi[j]+zi[j+1];
			mu[j+2]=mu[j]+mu[j+1];
            shu[j]=zi[j]*1.0/mu[j];
			sum[i]+=shu[j];

		}
	}
    for(i=0;i<m;i++){
		printf("%.3f\n",sum[i]);
	}
	return 0;
}
	
	
		