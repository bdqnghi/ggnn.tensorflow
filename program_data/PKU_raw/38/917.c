int main(int argc, char* argv[])
{
	int k,n,i,j;
	scanf("%d",&k);
	double x[100],s,a,y1,y2,y;
	for(i=0;i<k;i++)
	{
		scanf("%d",&n);
		s=0;
		for(j=0;j<n;j++)
		{
			scanf("%lf",&x[j]);
			s=s+x[j];
		}
		a=s/n;
		y1=0;
		for(j=0;j<n;j++)
		{
			y1=y1+(x[j]-a)*(x[j]-a);
		}
		y2=y1/n;
		y=sqrt(y2);
		printf("%.5f\n",y);
	}
	return 0;
}