int main()
{
	int t,tri[100][100],h,l,*point=tri[0];
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		cin>>h>>l;
		int temp=0;
		for(int p=1;p<=h;p++)
		{
			for(int q=1;q<=l;q++)
			{
				cin>>*(point+100*p+q);
				if(p==1||q==1||p==h||q==l)
					temp+=*(point+100*p+q);
			}
		}
		cout<<temp<<endl;
	}

	return 0;
}

	