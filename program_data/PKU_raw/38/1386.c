
int main(int argc, char* argv[])
{
    int k,j,n,i;
	double x[1000],a=0,b=0,s[100]={0};
	scanf ("%d",&k);
	for (j=0;j<k;j++)
	{
		scanf ("%d",&n);

		for (i=0;i<n;i++)
		{
			scanf ("%lf",&x[i]);
			a=a+x[i];
		}
		a=a/n;
		for (i=0;i<n;i++)
		{
			b=b+(x[i]-a)*(x[i]-a);
		}
		b=b/n;
		s[j]=sqrt(b);
		a=0;b=0;
	}
       	for (j=0;j<k;j++)
		{
			printf ("%.5lf\n",s[j]);
		}
		


	return 0;
}

