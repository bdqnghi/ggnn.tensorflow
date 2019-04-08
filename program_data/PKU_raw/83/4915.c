int main()
{
	int n,i,sum=0,a[10],b[10];
	double s=0,GPA,m[10];
	cin>>n;
	for(i=0;i<n;i++)
	{cin>>a[i];
	sum+=a[i];}
	for(i=0;i<n;i++)
	cin>>b[i];
	for(i=0;i<n;i++)
	{if(b[i]<60)
	m[i]=0;
	else if((b[i]>=60)&&(b[i]<=63))
		m[i]=1.0*a[i];
	else if((b[i]>=64)&&(b[i]<=67))
		m[i]=1.5*a[i];
	else if((b[i]>=68)&&(b[i]<=71))
		m[i]=2.0*a[i];
	else if((b[i]>=72)&&(b[i]<=74))
		m[i]=2.3*a[i];
	else if((b[i]>=75)&&(b[i]<=77))
		m[i]=2.7*a[i];
	else if((b[i]>=78)&&(b[i]<=81))
		m[i]=3.0*a[i];
	else if((b[i]>=82)&&(b[i]<=84))
		m[i]=3.3*a[i];
	else if((b[i]>=85)&&(b[i]<=89))
		m[i]=3.7*a[i];
	else if((b[i]>=90)&&(b[i]<=100))
		m[i]=4.0*a[i];
	}
	for(i=0;i<n;i++)
		s+=m[i];
	GPA=s/sum;
	cout<<fixed<<setprecision(2)<<GPA;
	return 0;
}

