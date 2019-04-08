int main()
{
	char a[1000];
	int flag1,flag2,i,j,n,lena;
	cin>>n;
	cin.get();
	for(i=0;i<n;i++)
	{
		flag1=0;
		flag2=1;
		cin.getline(a,1000);
		lena=strlen(a);
		if(lena==1)
		{
			if(a[0]<=57&&a[0]>=48||a[0]<=90&&a[0]>=65||a[0]>=97&&a[0]<=122||a[0]=='_')
				cout<<"1"<<endl;
			else cout<<"0"<<endl;

		}
		if(lena>1)
		{
			if(a[0]<=90&&a[0]>=65||a[0]>=97&&a[0]<=122||a[0]=='_')
			{
				flag1=1;
			}
			for(j=1;j<lena;j++)
			{
				if((a[j]>=97&&a[j]<=122)+(a[j]<=90&&a[j]>=65)+(a[j]=='_')+(a[j]>=48&&a[j]<=57)==0)
				{
					flag2=0;
					break;
				}
			}
		
			if(flag1+flag2>=2)
				cout<<"1"<<endl;
			if(flag1+flag2<2)
				cout<<"0"<<endl;
		}
		
	}
	return 0;
}
