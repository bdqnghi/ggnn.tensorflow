void main()
{
	int m,n,a[8][8],i,j,h[8]={0},l[8]={0},k=0,c=0;
	scanf("%d,%d",&m,&n);
    for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
    for(i=0;i<m;i++)
	{   c=a[i][0];h[i]=0;
		for(j=0;j<n;j++)
		{
           if(c<a[i][j])
		   {
			   h[i]=j;
			   c=a[i][j];}
		   
			  
		}
	}
    
	
	for(i=0;i<n;i++)
	{  c=a[0][i];l[i]=0;
		for(j=0;j<m;j++)
		{
             if(c>a[j][i])
			 {
				 l[i]=j;
				 c=a[j][i];}
			
		}
        if(h[l[i]]==i)
			 {printf("%d+%d\n",l[i],h[l[i]]);
			 k=k+1;}
	}
	if(k==0)
	printf("No");
}