void main()
{
	int a[300],i,n=0;
	int y,z;
	do
	{
		scanf("%d",&a[n++]);
	}
	while(getchar()==',');
    if(n==1) printf("No\n");
    else
    {
    	y=a[0];
        for(i=0;i<n;i++)
    	   if(a[i]>y) y=a[i];
 	    i=0;
        while(z=a[i]==y&&i<n)i++; 
        if(i==n)	 printf("No\n");
        else
        {for(i=0;i<n;i++)
 	       if(a[i]!=y&&a[i]>z) z=a[i]; 
         printf("%d\n",z);}
    }
}