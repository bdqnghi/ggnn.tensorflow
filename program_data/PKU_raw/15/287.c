void main()
{    
	int n,i,j,a[100][100],x=0,y=0,s,place;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<n;i++)
	{ 
		if(x==0)
		for(j=0;j<n;j++) 
		{if(a[i][j]==0) x++;}
		else break;
	}
	for(j=0;j<n;j++)
	{ 
		if(y==0)
		for(i=0;i<n;i++) 
	
		{	if(a[i][j]==0) 
		
				y++;}

		else break;
	}
	
	s=(y-2)*(x-2);
	printf("%d",s);
}
