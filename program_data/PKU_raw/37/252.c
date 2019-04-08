int main()
{
	char a[10000];
	int i,j,t=0,n,la;
	cin>>n;
	while(cin>>a)
	{
		t=0;
		la=strlen(a);
		for(i=0;i<la;i++)
		{
			t=0;
			for(j=0;j<la;j++)
			{
				if(i==j) continue;
				else
				{
				    if(a[i]==a[j]) 
			    	{
				    	t=1;
					    break;
				    }
		     	}
			}
			if(t==0) 
			{
				cout<<a[i]<<endl;
				break;
			}
		}
		if(t==1) cout<<"no"<<endl;
	}
	return 0;
}