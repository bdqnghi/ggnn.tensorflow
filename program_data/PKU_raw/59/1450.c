int main()
{
	int n=0,number=0,day=0;
	cin>>n;
	int nn=n*n;
	char a[nn];
	char b[nn];
	for(int iii=0;iii<n;iii++)
	for(int i=0;i<n;i++)
	cin>>a[n*iii+i];
	cin>>day;
	for(int m=1;m<day;m++)
	{for(int i=0;i<nn;i++)
		b[i]=a[i];
	for(int ii=0;ii<nn;ii++)
	{
		if(a[ii]=='@')
		{
			if(a[ii+1]!='#')
				{
				if((ii+1)%n!=0)
				b[ii+1]='@';
				}
			if(a[ii-1]!='#')
			{
							if((ii)%n!=0)
							b[ii-1]='@';
							}
			if(a[ii+n]!='#')
							b[ii+n]='@';
			if(a[ii-n]!='#')
							b[ii-n]='@';
		}
	}


	for(int w=0;w<nn;w++)
			a[w]=b[w];
	}
	for(int q=0;q<nn;q++)
			if(a[q]=='@')
				number=number+1;
		cout<<number;
	return 0;
}
