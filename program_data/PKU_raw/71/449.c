int main()
{
	int a[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
    int b[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int n,i,j,k,year,x,y;
    cin>>n;
	for (k=1;k<=n;k++)
    {
    	cin>>year>>x>>y;
    	j=0;
		if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0) ) 
    	{
	    	if (x>y) 
			{
				for (i=y;i<=(x-1);i++)
				j=j+a[i];
			} 
			else
			{
				for (i=x;i<=(y-1);i++)
				j=j+a[i];
			}
			if ((j%7)==0) cout<<"YES"<<endl;
                            else cout<<"NO"<<endl;
	    }
	    else 
	    {
  			if (x>y) 
			{
				for (i=y;i<=(x-1);i++)
				j=j+b[i];
			} 
			else
			{
				for (i=x;i<=(y-1);i++)
				j=j+b[i];
			}
			if ((j%7)==0) cout<<"YES"<<endl;
                            else cout<<"NO"<<endl;
    	}
    }
    return 0;
}