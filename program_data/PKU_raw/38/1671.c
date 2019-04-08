
int main(int argc, char* argv[])
{
	int n,k,i,j;
	double x1[100],x2[100],a1,a2,sum1=0.0,sum2=0.0,s;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		sum1=sum2=0;
		scanf("%d",&k);
		for(j=0;j<k;j++)
		{
			scanf("%lf",&x1[j]);
			sum1=sum1+x1[j];
		}
		a1=(double)sum1/k;
        for(j=0;j<k;j++)
		{
			x2[j]=(x1[j]-a1)*(x1[j]-a1);
			sum2=sum2+x2[j];
		}
        a2=(double)sum2/k;
        s=sqrt(a2);
	    printf("%.5lf\n",s);
	}
	return 0;
}