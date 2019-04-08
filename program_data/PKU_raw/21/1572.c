int main()
{
	int n;
	scanf("%d",&n);
    int i,j,k,s,y,x,z,w;	
	unsigned int *p=0;
	p=(unsigned int*)malloc(sizeof(unsigned int)*n);
	double total=0;
	double *deviation;
	deviation=(double*)malloc(sizeof(double)*n);
	double mean;	
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
		total=total+p[i];
	}
	mean=total/n;
	for(j=0;j<n;j++)
	{
		deviation[j]=fabs(p[j]-mean);
	}
    double b=deviation[0];
	int num=0;
	for(k=0;k<n;k++)
	{
		if(b<deviation[k+1])
		b=deviation[k+1];
	}
	unsigned int *fit;
	fit=(unsigned int*)malloc(sizeof(unsigned int)*n);
	*fit=0;
    for(s=0;s<n;s++)
	{
		if(deviation[s]==b)
		{
			fit[s]=p[s];
			num=num+1;
		}
		else fit[s]=0;
	}		
	if(num==1)
	{
		for(x=0;x<n;x++)
		{
			if(deviation[x]==b)
			{
				fit[x]=p[x];
		    	printf("%u",fit[x]);
			}			    	
		}
	}
	else	
	{
		unsigned int tmp;	
		for(y=0;y<n;y++)
		{
		    for(z=0;z<n-y;z++)
			{
		    	if(fit[z]>fit[z+1])
				{
				    tmp=fit[z];
				    fit[z]=fit[z+1];
			    	fit[z+1]=tmp;
				}
			}
		} 
		if(num==2)
			printf("%u,%u",fit[n-2],fit[n-1]);
		else
		{
			printf("%u",fit[n-num]);
		    for(w=n-num+1;w<n,fit[w]!=0;w++)
			{
	    	    printf(",%u",fit[w]);
			}
		}
	}
	printf("\n");
   	return 0;
}
