int main()
{
	int len,n,i,j,count=0;
	cin>>n;
	cin.get();
	for(i=0;i<n;i++)
	{
		char a[100];
		cin.getline(a,100);
		len=strlen(a);
		if((a[0]>='a'&&a[0]<='z')||(a[0]>='A'&&a[0]<='Z')||a[0]=='_')
		{
			count=0;
			for(j=1;j<len;j++)
				if((a[j]>='a'&&a[j]<='z')||(a[j]>='A'&&a[j]<='Z')||a[j]=='_'||(a[j]>='0'&&a[j]<='9'))
					count++;
			if(count==len-1)
				cout<<"1"<<endl;
			else if(count<len-1)
				cout<<"0"<<endl;
		}
		else
			cout<<"0"<<endl;
		
	}
	return 0;

}