main()
{
	int s[20][2],a[300],i=-1,j,t,d,k;
	do
	{
		i++;
		scanf("%d%d",&s[i][0],&s[i][1]);
	}while(s[i][1]!=0);
	t=i-1;
	printf("\n");
	for(i=0;i<=t;i++)
	{if(s[i][1]!=1)
	{   for(j=0;j<s[i][0];j++)
	    a[j]=j+1;
	    d=0;k=0;
		while(d<s[i][0]-1)
		{
			for(j=0;j<s[i][0];j++)
			if(a[j]!=0)
			{
				k++;
			        {
			        	if(k==s[i][1])
			        	{k=0;a[j]=0;d++;}
			        }
			}
			 
		 
		}
		for(j=0;j<s[i][0];j++)
		if(a[j]!=0)printf("%d\n",a[j]);
	}  
	
	else printf("%d\n",s[i][0]);}
}