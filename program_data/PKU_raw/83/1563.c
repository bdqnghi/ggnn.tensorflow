void main()
{
	int n,i,j,m[10];
	double y[10],z[10],b,GPA,x[10],a;
	scanf("%d",&n);
	a=0.0;
	b=0.0;
	GPA=0.0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&m[i]);
		a=a+m[i];
	}	
	for(i=0;i<n;i++)
    {
		scanf("%lf",&x[i]);
	}
	for(i=0;i<n;i++)
	{
		if(x[i]<=100 && x[i]>=90)
		{
			y[i]=4.00;
		}
		else if(x[i]<60)
		{
			y[i]=0.00;
		}
	    else if(x[i]<=89&&x[i]>=85)
			 {
				 y[i]=3.70;
			 }
		else if(x[i]<=84&&x[i]>=82)
				 {
					 y[i]=3.30;
				 }
		else if(x[i]<=81&&x[i]>=78)
					{
						 y[i]=3.00;
                           }
        else if(x[i]<=77&&x[i]>=75)
				        {
							   y[i]=2.70;
			                }
        else if(x[i]<=74&&x[i]>=72)
                         {
                                y[i]=2.30;
                      }
        else if(x[i]<=71&&x[i]>=68)
                         {
                                  y[i]=2.00;
                         }
        else if(x[i]<=67&&x[i]>=64)
                        {
                                 y[i]=1.50;
                           }
        else if(x[i]<=63&&x[i]>=60)
                     {
                          y[i]=1.00;
                      }
	}
	for(i=0;i<n;i++)
	{
           z[i]=y[i]*m[i];
	       b=b+z[i];
	}
	GPA=(double)b/(double)a;
	printf("%.2f\n",GPA);
}