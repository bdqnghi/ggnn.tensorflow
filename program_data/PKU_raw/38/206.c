int main()
{
	int n,k,i,j;
	float x[1001];
	double s,sum;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		sum=0.0;
		s=0.0;
		cin>>k;
		for(j=0;j<k;j++)
		{
			cin>>*(x+j);
			sum+=*(x+j);
		}
		sum=sum/k;
		for(j=0;j<k;j++)
			s=s+(sum-*(x+j))*(sum-*(x+j));
		s=sqrt(s/k);
		printf("\n%.5f",s);
	}
	return 0;
}