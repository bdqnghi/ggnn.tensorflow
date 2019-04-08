int main()
{
	int m;
	scanf("%d",&m);
	int sz[1000];
	int t;
	for(t=2;t<1000;t++){
		sz[0]=1;
		sz[1]=1;
		sz[t]=sz[t-1]+sz[t-2];
	}
	double szp[1000];
	for(t=0;t<1000;t++){
		szp[t]=0;
	}
	int i;
	for(i=1;i<=m;i++){
		int n;
		scanf("%d",&n);
		int j;
		for(j=2;j<=n+1;j++){
			szp[i]+=1.0*sz[j]/sz[j-1];
		}
	}
	for(i=1;i<=m;i++){
		printf("%.3lf\n",szp[i]);
	}
	return 0;
}