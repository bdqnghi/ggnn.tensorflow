int main()
{
	int n,m,a[100],i,j,c=0,d=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		
		scanf("%d",&m);
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[j]);
		}
        c=0;
		d=0;
		
		for(j=0;j<m;j++)
		{
		    if((60-a[j]-3*j)<3 && (60-a[j]-3*j)>0)
			{
			   printf("%d\n",a[j]);
			   c=1;
			   break;
			}
		}
		if(c==0)
		{
           for(j=0;j<m;j++)
		   {

	
		      if(a[j]>=(60-3*j))
			  {
			    printf("%d\n",60-3*j);
                d=1;
				break;
			  }
		   }
		
		
          if(d==0)
		  {
		    printf("%d\n",60-3*m);
		   }
		}
		
	
	}
	return 0;
}
