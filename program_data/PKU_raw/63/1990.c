main()
{
	int a[100][100],b[100][100],c[100][100],i,j,t=0,z,x1,x2,y1,y2,m;
	scanf("%d",&x1);
	scanf("%d",&y1);
	
	for(i=0;i<x1;i++)
	{
		for(j=0;j<y1;j++)
	    {scanf("%d",&a[i][j]);}
	}
	scanf("%d",&x2);
	scanf("%d",&y2);
	for(i=0;i<x2;i++)
	{
		for(j=0;j<y2;j++)
	    {scanf("%d",&b[i][j]);}
    }
     m=(x2<y1)?x2:y1;
    for(i=0;i<x1;i++)
    {
	   for(j=0;j<y2;j++)
	   {
			t=0;
		for(z=0;z<m;z++)
		{
			t=t+a[i][z]*b[z][j];
			
		}
		c[i][j]=t;	
	   }
    }
     
    for(i=0;i<x1;i++)
    {
		for(j=0;j<y2;j++)
		{
			if(j==0)
			printf("%d",c[i][j]);
			else printf(" %d",c[i][j]);
		}
		printf("\n");
	}
	
    

}