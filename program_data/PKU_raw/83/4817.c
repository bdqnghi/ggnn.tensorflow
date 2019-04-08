int main()
{
	int m=0,n,a[100],b[100],i;
	float c[100],s=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		cin>>b[i];
	}
	for(i=0;i<n;i++)
	{
		if(b[i]>=90)
			s+=a[i]*4;
		else if(b[i]>=85)
			s+=a[i]*3.7;
		else if(b[i]>=82)
			s+=a[i]*3.3;
		else if(b[i]>=78)
			s+=a[i]*3;
		else if(b[i]>=75)
			s+=a[i]*2.7;
		else if(b[i]>=72)
			s+=a[i]*2.3;
		else if(b[i]>=68)
			s+=a[i]*2;
		else if(b[i]>=64)
			s+=a[i]*1.5;
		else if(b[i]>=60)
			s+=a[i]*1;
		else;
	}
	for(i=0;i<n;i++)
		m+=a[i];
	s/=m;
	printf("%.2lf",s);
	return 0;
}