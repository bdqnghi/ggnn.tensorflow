int main()
{
	int i,n,m,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m);
		double a[100]={0},s=0,ave,s1=0,s2=0,*p=a;
		for(j=0;j<m;j++)
		{
			scanf("%lf",p+j);
			s=s+a[j];
		}
		ave=s/m;
		for(j=0;j<m;j++)
		{
			s2=s2+(*(p+j)-ave)*(*(p+j)-ave);
		}
		s1=sqrt(s2/m);
		printf("%.5lf\n",s1);
	}
	return 0;
}