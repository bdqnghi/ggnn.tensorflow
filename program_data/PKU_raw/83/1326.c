void main()
{
	int a[10],b[10],i,j,n,t,x,sum1;
	float c,d=0,average;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	
	for(j=0;j<n;j++)
	{scanf("%d",&b[j]);}

	
	for(j=0;j<n;j++)
	{
	    t=a[j];
	    x=b[j];
		if(x>=90)
		{c=4.0;
		d+=t*c;continue;}
		else if(x<90&&x>=85)
		{c=3.7;
		d+=t*c;continue;}
		else if(x<85&&x>=82)
		{c=3.3;
		d+=t*c;continue;}
		else if(x<82&&x>=78)
		{c=3.0;
		d+=t*c;continue;}
		else if(x<78&&x>=75)
		{c=2.7;
		d+=t*c;continue;}
		else if(x<75&&x>=72)
		{c=2.3;
		d+=t*c;continue;}
		else if(x<72&&x>=68)
		{c=2.0;
		d+=t*c;continue;}
		else if(x<68&&x>=64)
		{c=1.5;
		d+=t*c;continue;}
		else if(x<64&&x>=60)
		{c=1.0;
		d+=t*c;continue;}
		else 
		d+=0;
	}
	sum1=0;
    for(i=0;i<n;i++)
    {
    	
    	sum1+=a[i];
    }
    average=(float)d/sum1;
    printf("%.2f",average);
}