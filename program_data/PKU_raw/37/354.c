int main()
{
		char a[100][10000];
		int t,i,j,k,n;
		cin>>t;
		cin.get();
		for(i=0;i<t;i++)cin>>a[i];
			for(i=0;i<t;i++)
			{
				for(j=0;a[i][j]!='\0';j++)
				{
					n=0;
					for(k=0;a[i][k]!='\0';k++)
                    {
						if(a[i][j]==a[i][k])n++;
					}
				if(n==1)
				{
					cout<<a[i][j]<<endl;
				break;
                }
			}
		if(n>1)cout<<"no"<<endl;
			}
		return 0;
}