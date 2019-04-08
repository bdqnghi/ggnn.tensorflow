    char a[252];
	char b[252];
	void sum(int n)
	{
		int flag=0;
		int j=n-1;
		char c[252];
		char tem='0';
		while(j>=0)
		{
			c[j+1]=(a[j]+b[j]-48-48+(tem-48))%10+48;
			tem=48+((a[j]+b[j]-48-48+(tem-48))/10);
			j--;

		}
		if(tem=='0')
			for(int i=1;i<=n;i++)
				{if(c[i]!='0'||flag!=0)
				{cout<<c[i];flag=1;}

				}
		else {
			c[0]=tem;
			for(int i=0;i<=n;i++)
			{
				if(c[i]!='0'||flag!=0)
				{	cout<<c[i];flag=1;}


			}


		}
		if(flag==0) cout<<"0";

	}
int main()
{
	cin.getline(a,252);
	cin.getline(b,252);
	int la,lb;
	la=strlen(a);
	lb=strlen(b);
	if(la>lb)
	{
		for(int i=la-1;i>=la-lb;i--)
			b[i]=b[i-la+lb];
		for(int i=0;i<la-lb;i++)
			b[i]='0';

          sum(la);
	}
	else
	{
		for(int i=lb-1;i>=lb-la;i--)
					a[i]=a[i-lb+la];
				for(int i=0;i<lb-la;i++)
					a[i]='0';
				sum(lb);

	}
	return 0;
	}
