int main()
{
    int m,n,p,q;
	double sum;
	scanf("%d",&m);
	double sz[1000];
	sz[0]=1;
	sz[1]=2;
	for(p=2;p<1000;p++){
		sz[p]=sz[p-1]+sz[p-2];
	}
	double s[100];
    for(p=1;p<=m;p++){
		scanf("%d",&n);
		sum=0;
		for(q=0;q<n;q++){
			sum+=sz[q+1]/sz[q];
		}
		s[p]=sum;
	}
	for(p=1;p<=m;p++){
		printf("%.3lf\n",s[p]);
	}
	

	return 0;

}