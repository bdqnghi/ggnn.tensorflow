int main(int argc, char* argv[])
{
	int i,n,j;
	scanf("%d\n",&n);
	double a[100],b[100],max,s[1000];
	for(i=1;i<=n;i++)
	{
		scanf("%lf %lf",&a[i],&b[i]);
	}
	for(i=1;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			s[j-i+(2*n-i)*(i-1)/2]=sqrt((a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j]));
		}
	}
	max=s[1];
	for(i=1;i<=(n-1)*n/2;i++)
	{
		if(max<s[i])
		{
			max=s[i];
		}
	}
	printf("%.4lf",max);
	return 0;
}