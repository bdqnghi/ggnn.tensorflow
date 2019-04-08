int main()
{
	int m=0;//????
	double s=0;//??
	cin>>m;
	int i=0,k=0;//??
	float a=2,b=1,c=3,d=2;
	float z[100];
	int e=0;
	z[0]=2;
	z[1]=1.5;
	int tem1=0,tem2=0;
	for(e=2;e<100;e++)
	{
		z[e]=(a+c)/(b+d);
		tem1=a+c;
		tem2=b+d;
		a=c;
		c=tem1;
		b=d;
		d=tem2;
	}		
	int n=0;//???n?
	for(i=0;i<m;i++)
	{
		cin>>n;
		for(k=0;k<n;k++)
		{
			s=s+z[k];
		}
		printf("%.3f",s);
		cout<<endl;
		s=0;
	}
	return 0;
}
