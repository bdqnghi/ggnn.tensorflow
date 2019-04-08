int main()
{
	int n=0;
	cin>>n;
	cin.get();
	int i,j,k;
	int l1,l2;
	char x[201];
    char y[201];
	int a[201],b[201];
	for(k=0;k<n-1;k++)
	{
		
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));	
		memset(x,0,sizeof(x));
		memset(y,0,sizeof(y));
		cin.getline(x,201);
		cin.getline(y,201);
		cin.get();
	    l1=strlen(x);
		l2=strlen(y);
		//  cout<<x<<endl;
		//  cout<<y<<endl;
		for(i=0,j=l1-1;i<l1;i++,j--)
		{
			a[j]=x[i]-'0';
		}
		for(i=0,j=l2-1;i<l2;i++,j--)
		{
			b[j]=y[i]-'0';
		}
		for(i=0;i<l2;i++)
		{
			a[i]=a[i]-b[i];
			if(a[i]<0)
			{
				a[i]=a[i]+10;
				a[i+1]=a[i+1]-1;
			}
		}
		for(i=200;i>=0;i--)
		{
			if(a[i]!=0)
			break;
		}
		for(i=i;i>=0;i--)
		{
			cout<<a[i];
		}
		cout<<endl;
	}
	    memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));	
		memset(x,0,sizeof(x));
		memset(y,0,sizeof(y));
		cin.getline(x,201);
		cin.getline(y,201);
	    l1=strlen(x);
		l2=strlen(y);
		//  cout<<x<<endl;
		//  cout<<y<<endl;
		for(i=0,j=l1-1;i<l1;i++,j--)
		{
			a[j]=x[i]-'0';
		}
		for(i=0,j=l2-1;i<l2;i++,j--)
		{
			b[j]=y[i]-'0';
		}
		for(i=0;i<l2;i++)
		{
			a[i]=a[i]-b[i];
			if(a[i]<0)
			{
				a[i]=a[i]+10;
				a[i+1]=a[i+1]-1;
			}
		}
		for(i=200;i>=0;i--)
		{
			if(a[i]!=0)
			break;
		}
		for(i=i;i>=0;i--)
		{
			cout<<a[i];
		}
		cout<<endl;

	return 0;
}