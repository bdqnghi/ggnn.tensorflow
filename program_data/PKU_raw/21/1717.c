// ??????.cpp : Defines the entry point for the console application.
//

int main()
{
	int n,a[1000],i,sa=0,m=0,j,s[1000];
	double max=0,cha[1000],t,sum;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		sa+=a[i];
	}
	sum=(double)sa/(double)n;
	for(i=0;i<n;i++)
	{
		cha[i]=fabs((double)a[i]-sum);
		if(fabs((double)a[i]-sum)>=max)
			max=fabs((double)a[i]-sum);
	}
	for(i=0;i<n;i++)
	{
		if(cha[i]==max)
		{
			s[m]=a[i];
			m++;
		}
	}
	for(i=0;i<m-1;i++)
		for(j=0;j<m-1-i;j++)
		{
			if(s[j]>s[j+1])
			{
				t=s[j];s[j]=s[j+1];s[j+1]=t;
			}
		}
		cout<<s[0];
		for(i=1;i<m;i++)
			cout<<","<<s[i];
		return 0;
}



	
