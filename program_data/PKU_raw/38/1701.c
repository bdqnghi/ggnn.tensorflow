
int main(int argc, char* argv[])
{
	int n,k,i,j;
	double a[1000],b,d,S,c;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&k);
		for(j=1;j<=k;j++)
		{
			scanf("%lf",&a[j]);
		}
		b=0;
		d=0;
       
	    for(j=1;j<=k;j++){
            b=b+a[j];
		}
		c=b/k;
		for(j=1;j<=k;j++){
			d=d+(a[j]-c)*(a[j]-c);
	    	S=sqrt(d/k);
		}
	    printf("%.5lf\n",S);
	}
	return 0;
}

