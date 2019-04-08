
int main()
{
	int k,n,i,a;
	double sz[1000][100],pj,s=0;
	scanf("%d",&k);
	for(a=0;a<k;a++){
		s=0;
		pj=0;
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%lf",&sz[a][i]);
			pj+=sz[a][i];
		}
		pj=pj/n;
		for(i=0;i<n;i++){
			s+=(sz[a][i]-pj)*(sz[a][i]-pj);
		}
		s=sqrt(s/n);
		printf("%.5lf\n",s);
	}
	return 0;
}