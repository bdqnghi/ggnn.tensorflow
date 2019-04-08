
int main()
{
	double sz[100],*p,sum,average,total,s;
	int k,i,n;
	scanf("%d",&k);
	for(i=1;i<=k;i++){
		scanf("%d",&n);
		double*p=sz;
		sum=0.0;
		total=0.0;
		for(p=sz;p<sz+n;p++){
			scanf("%lf",p);
			sum=sum+*p;
		}	
		average=sum/(1.0*n);
		for(p=sz;p<sz+n;p++){
			total=total+(*p-average)*(*p-average);
		}
		s=sqrt(total/(1.0*n));
		printf("%.5f\n",s);
	}
	return 0;
}

