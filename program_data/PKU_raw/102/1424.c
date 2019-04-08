int main()
{
	int n,i=0,j=0,ttt;
	cin>>n;
	double f[44],m[44];
	char sex[10];		
	double height;
	for(ttt=1;ttt<=n;ttt++)
	{
		
		cin>>sex>>height;
		if(sex[0]=='m')
		{
			m[i]=height;
			i++;
		}
		else if(sex[0]=='f')
		{
			f[j]=height;
			j++;
		}
	}
	int p=i-1,q=j-1;
	double tt;
	int h1,h2;
	for(h1=0;h1<p;h1++)
	{
		for(h2=0;h2<p;h2++)
		{
			if(m[h2]>m[h2+1])
			{
				tt=m[h2];m[h2]=m[h2+1];m[h2+1]=tt;
			}
		}
	}
	cout<<fixed<<setprecision(2)<<m[0];
	for(h1=1;h1<=p;h1++)
		cout<<fixed<<setprecision(2)<<" "<<m[h1];
	for(h1=0;h1<q;h1++)
	{
		for(h2=0;h2<q;h2++)
		{
			if(f[h2]<f[h2+1])
			{
				tt=f[h2];f[h2]=f[h2+1];f[h2+1]=tt;
			}
		}
	}
	for(h1=0;h1<=q;h1++)
		cout<<fixed<<setprecision(2)<<" "<<f[h1];
	return 0;
}
