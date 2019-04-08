int main()
{
	int n,i,j;
	double d,max,max1;
	struct distance{
		double x,y;
	}*num;
	scanf("%d",&n);
	num=(struct distance*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		scanf("%lf %lf",&((num+i)->x),&((num+i)->y));
	}
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
		     for(j=i+1;j<n;j++)
			 {
			        
			        d=sqrt(((num+i)->x-(num+j)->x)*((num+i)->x-(num+j)->x)+((num+i)->y-(num+j)->y)*((num+i)->y-(num+j)->y));
			        if(j==i+1)
			   	        max=d;
			        else
					{
				        if(d>max)
					    max=d;
					}	
			 }
			 max1=max;
		}
		else 
		{
		     for(j=i+1;j<n;j++)
			 {
			        d=sqrt(((num+i)->x-(num+j)->x)*((num+i)->x-(num+j)->x)+((num+i)->y-(num+j)->y)*((num+i)->y-(num+j)->y));
			        if(j==i+1)
			   	        max=d;
			        else
					{
				        if(d>max)
					    max=d;
					}
					
			 }          
			if(max>max1)
			max1=max;
		}
	}
	printf("%.4lf",max1);
	return 0;
}
