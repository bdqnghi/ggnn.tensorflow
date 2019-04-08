int main()
{
    int k;
	scanf("%d",&k);
	int i,j;
	int n;
	double cao[100],a[100],b[100],s[100];
	double ji[1000];
	for(i=0;i<k;i++)
	{
	  scanf("%d",&n);
	  a[i] = 0;
	  for(j=0;j<n;j++)
	  {
	   scanf("%lf",&ji[j]);
	   a[i]=a[i]+ji[j];
      }       
      
	  a[i]=(double)a[i]/n;
	  s[i]=0;
	  for(j=0;j<n;j++)
	  {
		 b[i]=ji[j]-a[i];
		 b[i]=b[i]*b[i];
		 s[i]=s[i]+b[i];
	  }
	  s[i]=(double)s[i]/n;
      cao[i]=sqrt(s[i]);
	}
	for(i=0;i<k;i++)
	{
		printf("%.5lf\n",cao[i]);
	}
	return 0;
}