int main()
{
	int n,a[1000],i,sum=0,j,temp;
	char t=',';
	float m,b[1000],d,q;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	m=sum/(n*1.0);
	for(i=0;i<n;i++)
	{
                q=a[i]-m;
		b[i]=abs(q);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<(n-i);j++)
		{
			if(b[j]<b[j+1])
			{
			d=b[j];
			b[j]=b[j+1];
			b[j+1]=d;
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
			}
		}
	}
	if(b[0]!=b[1])
		cout<<a[0];
	else
	{
		cout<<a[0];
		for(i=1;i<n;i++)
		{
			if(b[i]==b[0])
			{
				cout<<t<<a[i];
			}
			else
				break;
		}
	}
	return 0;
}
