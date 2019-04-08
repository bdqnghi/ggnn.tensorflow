int main()
{
    int k,n,i,j;
    double x[1000];
    double s[100];
    scanf("%d",&k);
    for(i=1;i<=k;i++){
    	double sum1=0,b[1000],a,sum2=0;
    	scanf("%d",&n);
    	for(j=1;j<=n;j++){
    		scanf("%lf",&x[j]);
    		sum1+=x[j];
    	}
    	a=sum1/n;
    	for(j=1;j<=n;j++){
    		b[j]=(x[j]-a)*(x[j]-a);
    		sum2+=b[j];
    	}
    	s[i]=pow((sum2/n),0.5);
    }
    for(i=1;i<=k;i++){
    	printf("%.5lf\n",s[i]);
    }
return 0;
}