int main()
{
	int a[301],n,m,i,kao,mn[100000][2];
	for(kao=1;kao<=1000000;kao++)
	{
	    cin>>mn[kao][0]>>mn[kao][1];
		int t=0;
	     n=mn[kao][0];
	     m=mn[kao][1];
	     if(n!=0)
	    {
	     for(i=1;i<=n;i++) a[i]=i;
	    int p=1;
	    while(t<(n-1)*m)
	     {
		    if(a[p]!=0) t=t+1;
		    else t=t;
		   if(t%m==0&&a[p]!=0) a[p]=0;
		   if(p==n) p=1;
		    else p++;
	    }
	   for(i=1;i<=n;i++)
	   {
		    if(a[i]!=0)
			    cout<<a[i]<<endl;
     	}
	  }
		 else break;
	}
		
		return 0;
}

		
