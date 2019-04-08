int main()
	{
	int n,i;
	float m,c,d;
	float a[100]={0},b[100]={0},h[100]={0};
	cin>>n;
	cin>>c>>d;
	for (i=2;i<=n;i++)
		{
		cin>>a[i]>>b[i];
		h[i]=b[i]/a[i];
		}
    m=d/c;
	for (i=2;i<=n;i++)
		{
		if (h[i]-m>0.05)
			cout<<"better"<<endl;
		else if (m-h[i]>0.05)
			cout<<"worse"<<endl;
		else 
			cout<<"same"<<endl;
		}
	return 0;
	}
