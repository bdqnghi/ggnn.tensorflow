void main()
{
	int a[200],k,i,n=0,j=0;
   		for(i=0;i<200;i++)
		{	
			scanf("%d",&a[i]);
			if(a[i]!=-1&&a[i]!=0)
				n=n+1;
			if(a[i]==-1)
				break;	
			if(a[i]==0)	
				{	
					for(k=0;k<n;k++)
					{		
						for(i=0;i<n;i++)
						{	
							if(a[k]==2*a[i])
							j=j+1;
						}
					}
					printf("%d\n",j);
					j=0;
					i=-1;
					n=0;
				}
		}
}