int main()
{
	int n,a,b,c,d;
	cin>>n;
	if(n==10000)
		cout<<"00001"<<endl;
	else
	{
		if(n/1000>=1)
		{
			a=n/1000;
			b=(n-a*1000)/100;
			c=(n-a*1000-b*100)/10;
			d=n-a*1000-b*100-c*10;
			cout<<d<<c<<b<<a<<endl;
		}
		else
		{
			if(n/100>=1)
			{
               b=n/100;
			   c=(n-b*100)/10;
		    	d=n-b*100-c*10;
			  cout<<d<<c<<b<<endl;
			}
			else
			{
				if(n/10>=1)
				{
                  c=n/10;
		        	d=n-c*10;
			       cout<<d<<c<<endl;
				}
				else
					cout<<n<<endl;
			}
		}
	}
	return 0;
}
			
