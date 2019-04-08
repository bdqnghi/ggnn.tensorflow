int main()
{
	int a[6][6],i,j,p,q,max[6],min[6],t=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
    max[0]=a[0][0];
	min[0]=a[0][0];
	for(p=0;p<5;p++)
	{   
		for(q=0;q<5;q++)
		{
			if(max[p]<a[p][q])
			{
				max[p]=a[p][q];
			}
			if(min[q]>a[p][q])
			{
				min[q]=a[p][q];
			}
		}
	}
	for(p=0;p<5;p++)
	{   
		for(q=0;q<5;q++)
		{
    	    if(max[p]==min[q])
			{	
	        	printf("%d %d %d",p+1,q+1,a[p][q]);
		        t++;
			}
		}
	}
	if(t==0)
	{
		 printf("not found");
	}
	return 0;
}