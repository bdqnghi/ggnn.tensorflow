void main ()
{
	int s=0,i=0,j=0,k,t,r=0,h;
    double x[100],y[100],b[100];
   scanf ("%d",&j);
   for (i=0;i<j;i++)
   {
   scanf ("%lf%lf",&x[i],&y[i]);
   
   }

	
	
	
	for (k=0;k<j;k++)
	   
   {
	   for (i=0;i<j;i++)
	   {
		  b[r]=sqrt((x[i]-x[k])*(x[i]-x[k])+(y[i]-y[k])*(y[i]-y[k]));
		   r++;	  
	   }
   }



for (k=0;k<r-1;k++)
	   
   {
	   for (i=0;i<r-k-1;i++)
	   {
		   if (b[i]<b[i+1])
		   {
			   t=b[i];
			  b[i]=b[i+1];
			  b[i+1]=t;
			   
		   }
	   }
   
}



printf ("%.4lf",b[0]);






}   