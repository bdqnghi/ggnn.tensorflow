int main()
{
	int e=0,i,j,k=-1;
	int a[10000];
	int ans;
     while(1)
	{
		i=1;
		cin>>a[0];
		while (a[i-1]!=0)
		{
			cin>>a[i];i++;
		}
		e=i-1;
		if (a[0]==-1) return 0;
			ans=0;
	        for(i=0;i<e;i++)
    	      for(j=0;j<e;j++)
    	      {
    	    	  if (i!=j)
    		     if((a[i]%a[j]==0)&&(a[i]/a[j]==2)) ans++;
    	      }
	       cout<<ans<<endl;
	}
    return 0;
}