int main()
{
	int n;
	scanf("%d",&n);
	int nj[N];
	int lr[N],xr[N];
	char zfc[N][20];
	int i;
	int m=0,k=0;
	for(i=0;i<n;i++)
	{
        scanf("%s",zfc[i]);
		scanf("%d",&nj[i]);
	}
    for(i=0;i<n;i++)
	{
		if(nj[i]>=60)
		{
			lr[m]=i;
			m++;
		}
		else
		{
			xr[k]=i;
			k++;
		}
	}
	int j;
	if(m>=2)
	{
	   for(i=0;i<m-1;i++)
	   {
		  for(j=m-1;j>i;j--)
		  {
			  int e;
			  if(nj[lr[j]]>nj[lr[j-1]])
			  {
				
				e=lr[j];
				lr[j]=lr[j-1];
				lr[j-1]=e;
			  }
			  else if(nj[lr[j]]==nj[lr[j-1]]&&(lr[j]<lr[j-1]))
			  {
                
				e=lr[j];
				lr[j]=lr[j-1];
				lr[j-1]=e;
			  }
		  }
	   }
	}
	if(m>=1)
	{
	    for(i=0;i<m;i++)
		{
	         printf("%s\n",zfc[lr[i]]);
		}
	}
	if(k>0)
	{
        for(i=0;i<k;i++)
		{
		    printf("%s\n",zfc[xr[i]]);
		}
	}
	return 0;
}



