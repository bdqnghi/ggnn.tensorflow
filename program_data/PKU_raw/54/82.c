main()
{
  	int n,k,m,i,j,a[100],t=0;
  	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
		a[i]=0;
	for(j=1;;j++)
	{
		t=0;
		a[n-1]=j;
		for(i=n-1;i>0;i--)
			{
				if((a[i]*n+k)%(n-1)==0)
					a[i-1]=(a[i]*n+k)/(n-1);
				else
                                        {t=1;break;}
			}
		if(t==0)
		{
			printf("%d",a[0]*n+k);
		
			break;
		}	
	}
}
	