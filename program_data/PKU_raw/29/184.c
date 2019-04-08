
int main()
{
	int n,m,i,c;
	double s=0,sh[1000],xia[1000],sz[1000];
	scanf("%d",&m);
	sh[0]=2;
	xia[0]=1;
	sh[1]=3;
	xia[1]=2;
	sz[0]=2.000/1.000;
	sz[1]=3.000/2.000;
	for(i=2;i<1000;i++){
		sh[i]=sh[i-2]+sh[i-1];
		xia[i]=xia[i-2]+xia[i-1];
		sz[i]=sh[i]/xia[i];
	}
	for(c=0;c<m;c++){
		s=0;
		scanf("%d",&n);
		for(i=0;i<n;i++){
			s+=sz[i];
		}
		printf("%.3lf\n",s);
	}
	return 0;
}