int main()
{
	int k,cycle;
	cin>>k;
	for(cycle=0;cycle<k;cycle++)
	{
		int n,i;
		double a=0,s=0,x[1000]={0};
		cin>>n;
		for(i=0;i<n;i++) 
		{ scanf("%lf",&x[i]); a+=x[i];}
		a=a/n;
		for(i=0;i<n;i++) s+=abs(x[i]-a)*abs(x[i]-a);
		s=sqrt(s/n);
		printf("%.5f\n", s);

	}


	cin.get();
	cin.get();
	cin.get();
	return 0;
}
