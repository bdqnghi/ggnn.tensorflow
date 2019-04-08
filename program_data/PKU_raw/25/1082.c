int ss(char a[100])
{
	int i=0,b[100],s=0,m,n;
	while(a[i]!='a')
	{
		i++;
	}
	
	if(i==1)
	{
		b[0]=a[0]-48;
		b[0]=2*b[0];
		if(b[0]>9)
		{
			a[1]=b[0]%10+48;
			a[0]=b[0]/10+48;
			return 1;
		}
		else
		{
			a[0]=b[0]+48;
			return 0;
		}
	}
	else
	{
		b[0]=a[0]-48;
		if(b[0]>=5)
		{
			for(m=(i-1);m>=0;m--)
			{
				if(m>0)
				{
				b[m]=a[m]-48;
				b[m]=b[m]+b[m];
				}
				else
				{
					b[0]=b[0]*2;
				}
				if(b[m]>9)
				{
					a[m+1]=b[m]%10+48+s;
					s=1;
					
				}
				else
				{
					a[m+1]=b[m]+48+s;
					s=0;
					
				}
				a[0]=49;
			}
			return 1;
		}
		else
		{
			s=0;
			for(m=(i-1);m>=0;m--)
			{
				b[m]=a[m]-48;
				b[m]=b[m]*2;
				if(b[m]>9)
				{
					a[m]=b[m]%10+48+s;
					s=1;
				}
				else
				{
					a[m]=b[m]+48+s;
					s=0;
				}
			}
			return 0;
		}
		
	}
}
int main()
{
	int N,i=0,o,n=1;
	cin>>N;
	char a[100];
	for(o=0;o<100;o++)
	{
		a[o]='a';
	}
	if(N==0)
		cout<<"1";
	else
	{
		a[0]=49;
		while(i<N)
		{
			n=n+ss(a);
			i++;
		}
		for(o=0;o<n;o++)
		{
			cout<<a[o];
		}
	}	
	return 0;
}
