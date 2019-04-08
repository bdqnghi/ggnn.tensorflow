void main()
{
	int n,m,i,a[300]={0},j,k,h;
	for(h=0;h<=99;h++)
	{
		scanf("%d %d",&n,&m);
		if(n==0&&m==0)
			break;
		else
		{   
			k=0;
			if(n==1)
				printf("1\n");
			else
			{
			    for(i=0;i<n-1;i++)
				{
					j=1;
					while(j<=m)
					{
						if(a[k]==1)
							k++;
						else
						{
							j++;
							k++;
						}
						k=k%n;
					}
					if(k==0)
						a[n-1]=1;
					else
						a[k-1]=1;

				}
				for(i=0;i<n;i++)
				{
					if(a[i]==0)
						printf("%d\n",i+1);
					a[i]=0;
						
				}
			}
		}
		
	}
	
}
	

	
	 