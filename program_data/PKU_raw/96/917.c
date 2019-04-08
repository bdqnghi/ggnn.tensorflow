int main()
{
	char c[105]={0};
	cin>>c;
	int i,s,p;
	s=strlen(c);
	int a[105]={0};
	int b[105]={0};
	for(i=0;i<s;i++)
		a[i]=c[i]-48;
	if(s==1)
	{
		cout<<0<<endl;
		cout<<a[0];
	}
	else if((s==2)&&(10*a[0]+a[1]<13))
	{
		cout<<0<<endl;
		cout<<(10*a[0]+a[1]);
	
	}
	else if((s==2)&&(10*a[0]+a[1]==13))
	{
		cout<<1<<endl;
		cout<<0;
	
	
	
	}
	else 
	{
		if(10*a[0]+a[1]>13)
		{
			b[0]=(10*a[0]+a[1])/13;

			p=(10*a[0]+a[1])%13;
			for(i=1;i<s-1;i++)
			{
				b[i]=(p*10+a[i+1])/13;
				p=(p*10+a[i+1])%13;
			}

			for(i=0;i<s-1;i++)
				cout<<b[i];
			cout<<endl;
			cout<<p;


		}
		else
		{
			b[0]=(100*a[0]+10*a[1]+a[2])/13;
			p=(100*a[0]+10*a[1]+a[2])%13;
			for(i=1;i<s-2;i++)
			{
				b[i]=(p*10+a[i+2])/13;
				p=(p*10+a[i+2])%13;
			}
			for(i=0;i<s-2;i++)
				cout<<b[i];
			cout<<endl;
			cout<<p;










		}





	}


	return 0;

}