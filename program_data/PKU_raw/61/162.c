int main()
{
	int a1,a2,a3,i,j,p,n,t;
	cin>>n;
	for (i=0;i<n;i++)
	{
		a1=1;
		a2=1;
		cin>>p;
		if(p==1||p==2) cout<<"1"<<endl;
		else 
		{
		   for(j=2;j<p;j++)
		   {
			   a3=a1+a2;
			   t=a3;
			   a1=a2;
			   a2=t;
		   }
		   cout<<a3<<endl;
		}
	}

	return 0;
}
