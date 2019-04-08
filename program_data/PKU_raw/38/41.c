
int main()
{
	int k,i,j;
	double sz[1000],ave,result=0,add,sum=0;
	

	scanf("%d",&k);

	for(i=0;i<k;i++){
		int n;
		sum=0;
		result=0;
		scanf("%d",&n);
		for(j=0;j<n;j++){
			scanf("%lf",&sz[j]);
			
		}
		double *p;
		for(p=sz;p<sz+n;p++){
			sum+=*p;
		}
		ave=sum/(double)n;
		
		for(p=sz;p<sz+n;p++){
			result+=(*p-ave)*(*p-ave);
		}
		add=sqrt(result/(double)n);
		printf("%.5lf\n",add);
	}
	
	return 0;
}
