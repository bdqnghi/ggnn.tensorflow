void main()
{
	float b[400],sum,a[400],large,c[40],d,de[40];
	int i,max,u,t,n,judge,m,fin,final;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%f",&a[i]);
	sum=0;
	for(i=0;i<n;i++)
		sum=sum+a[i];
	d=sum/n;
	for(i=0;i<n;i++)
	{	if(a[i]>=d)
			b[i]=a[i]-d;
		else b[i]=d-a[i];
	}
	max=0;
	for(i=0;i<n;i++)
		if(b[i]>b[max])
		max=i;
    for(i=0,t=0;i<n;i++)
		if(b[i]==b[max])
		{c[t]=a[i];
		t++;}
    m=0;
    for(i=0;i<=t-1;i++)
      if(c[i]<=d) {m=1;break;}
    if(m==1)
    {   u=0;
        for(i=0;i<=t-1;i++)
	  if(c[i]<=d)
		{de[u]=c[i];u++;}
           fin=u;
        for(i=0,u=fin;i<=t-1;i++)
		  if(c[i]>d)
		{de[u]=c[i];u++;}
	      final=u;}
    
    else if(m==0)
      { for(i=0;i<t;i++)
          de[i]=c[i];
        }final=t;
          judge=1;
		if(final-1==0) judge=0; 
            if(judge==1)
                  {
                   for(i=0;i<final-1;i++)
                     printf("%.0f,",de[i]);
		  printf("%.0f",de[i]);
                  }
            else printf("%.0f",de[final-1]);
}
	    
