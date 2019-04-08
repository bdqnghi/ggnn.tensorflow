int main(int argc, char* argv[])
{
	int k,n;
	scanf("%d",&k);
	int i;
	float sz[100];
	for(i=1;i<=k;i++){
		scanf("%d",&n);
		int j;
		for(j=0;j<n;j++){
			scanf("%f",&*(sz+j));
		}
		float a=0;
		for(j=0;j<n;j++){
			a=a+*(sz+j);
		}
		a=a/n;
		double s=0;
		for(j=0;j<n;j++){
			s=s+(*(sz+j)-a)*(*(sz+j)-a);
		}
		s=s/n;
		s=sqrt(s);
		printf("%.5lf\n",s);
	}
	return 0;
}