int main ()
{
	int b[10000]={2};
	int c=0,d=0,n=0;
	cin>>n;
	if(n==0)
	{
		cout<<"1";
	}
	else
	{
	for (int i=1;i<n;i++)
	{
		for(int j=1;j<=10000;j++)
		{
			b[j-1]=b[j-1]+b[j-1]+c;
			if(b[j-1]>9)
			{
				c=1;
				b[j-1]=b[j-1]-10;
			}
			else
			{
				c=0;
			}
		}
	}
	for(int i=10000;i>0;i--)
	{
		if(b[i-1]!=0)
		{
			d=i;
			break;
		}
	}
	for(int i=d;i>0;i--)
	{
		
		cout<<b[i-1];
	}
	}
	return 0;
}