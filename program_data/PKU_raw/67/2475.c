main()
{
  	int n;
  	scanf ("%d",&n);
  	int i;
  	double a[500],b[500];
  	for(i=0;i<n;i++)
  	{
	  scanf ("%d %d",&a[i],&b[i]);			
	}
    double c[500];
    char r[500][500];
    for (i=0;i<n;i++)
    {
		c[i]=b[i]/a[i];
	
	}
	for (i=1;i<n;i++)
	{
		if (i<n)
	  {
			if ((c[i]-c[0])>0.05)
	   {
	      printf ("better\n");
	   }
	   else if ((c[0]-c[i])>0.05)
	    {
		 printf ("worse\n");
		}
	   else 
	   {
	      printf ("same\n");
	   }	  
	  }
	  else 
	  {
	   	if ((c[i]-c[0])>0.05)
	   {
	     printf ("better");
	   }
	   else if ((c[0]-c[i])<0.05)
	    {
		 printf ("worse");
		}
	   else 
	   {
	     printf ("same");
	   }	  
	  }
	  
	  
	}
	

}