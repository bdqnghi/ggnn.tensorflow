


int main()
{
	int a[20],i=0,j,count=0;
	while(cin>>a[i])
	{
		 if(a[i]==0)
	     {
             cout<<count<<endl;
	         count=0;
                 i=0;
	         continue;
	     }
	
		if(i!=0)
		{
			for(j=0;j<i;j++)
			{
				if( a[j]==2*a[i]||a[i]==2*a[j])
				{count++;}
			}

		}
	     i++;
	}
	
	
	   
	return 0;
}
