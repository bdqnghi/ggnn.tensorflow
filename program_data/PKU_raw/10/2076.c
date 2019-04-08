
main()
{
	int k=0,max=0;
	scanf("%d",&k);
	int *h=(int *)malloc(k*sizeof(int));
	int *p=(int *)malloc(k*sizeof(int));
	for(int i=0;i<k;i++)
	    scanf("%d",&h[i]);
	p[k-1]=1;
	for(int i=0;i<k-1;i++)
	{ 
	    for(int j=1;k-2-i+j<=k-1;j++) 
		{
			if(h[k-2-i]>=h[k-2-i+j])
		    {
			    if(max<=p[k-2-i+j])
				max=p[k-2-i+j];			    
		    }
        }
		p[k-2-i]=max+1;
		max=0; 
	}
		max=p[0];
		for(int i=0;i<k;i++)
		    if(max<p[i])
			   max=p[i];
	    printf("%d",max);
		free(h);
		free(p);  
}