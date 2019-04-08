
int main(int argc, char* argv[])
{
	int k,n[111],i,j;
	double x[111][111];
	double a[111],s[111],m[111],S[111];
	scanf ("%d",&k);
	for (i=0;i<k;i++)
	{
		scanf ("%d",&n[i]);
		for (j=0;j<n[i];j++)
		{
			scanf ("%lf",&x[i][j]);
		}
	}
	for (i=0;i<k;i++)
	{
		s[i]=0;
		for (j=0;j<n[i];j++)
		{
			s[i]+=x[i][j];
		}
		a[i]=s[i]/n[i];
	}
	for (i=0;i<k;i++)
	{
		m[i]=0;
		for (j=0;j<n[i];j++)
		{
			m[i]+=(x[i][j]-a[i])*(x[i][j]-a[i]);
		}
		S[i]=sqrt(m[i]/n[i]);
	    printf("%.5lf\n",S[i]);
	}
	return 0;
}