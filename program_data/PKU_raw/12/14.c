void main()
{
	int c[15],i,m=0;
    for(i=0;i<15;i++)
	{
		scanf("%d",&c[i]);
		if(c[i]==0)
		{
			break;
		}
	}
	
	int k,j,n=0;
	for(k=0;c[k]!=0;k++)
	{
		for(j=0;c[j]!=0;j++)
		{
		
			if(c[k]==2*c[j])
			{
				n++;
				
			}
		}
			
	}
	printf("%d",n);
}