int main()
{
	int n,i,j=1,k,m[20],x,time1;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x;
		if(x==0)//??????
			cout<<60<<endl;
		else
		{
		for(j=1;j<=x;j++)
		    {
				cin>>m[j];
				time1=m[j]+3*(j-1);//??????
				if(time1>=57&&time1<=60)
			    {
						  cout<<m[j]<<endl;
						  break;
			    }
				if(time1>60)
				{
					cout<<m[j]-(time1-60)<<endl;
					break;
				}

		    }
        if(j<x)
        	for(k=j;k<x;k++)
        		cin>>m[k];//????????????????
		if(time1<=57)
			{
				cout<<60-(time1+3)+m[x]<<endl;
			 }
		}
	}

	return 0;
}

