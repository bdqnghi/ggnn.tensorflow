int main()
{
	int t,i,j,p;
	cin >> t;
	char a[100];
	char b[10];
	char d[3]="A";

	
	for(i=0;i<t;i++)
	{
		b[i]=d[0];
	}
	
	int count[26];
	

	for(i=0;i<t;i++)
	{
		for(j=0;j<26;j++)
		{
			count[j]=0;
		}
		
		cin >> a;
		for(j=0;j<100;j++)
		{
			if(a[j]!=d[2])
            {
				p=a[j]-97;
				
				count[p]=count[p]+1;
				
			}
			else
				break;
		}
		
		for(j=0;j<100;j++)
		{
			p=a[j]-97;
			if(count[p]==1)
			{
				b[i]=p+97;
				break;
			}
		}
	}
	for(i=0;i<t;i++)
	{
		
		if(b[i]==d[0])
		{
			cout<<"no\n";
		}
		if(b[i]!=d[0])
		{
			cout<<b[i]<<"\n";
		}
	}
	
	
	
	
	
	
	
	
	return 0;
}