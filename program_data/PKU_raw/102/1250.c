main()
{
	double a[40],b[40],m;
	int n,p,q,i=0,j=0;
	char c[8];
	scanf("%d",&n);
	for(p=0;p<n;p++)
	{
		c[4]=0;
	scanf("%s%lf",c,&m);
		
		if(c[4]==0)
		{
			a[i]=m;
			i++;
		}
		else
		{
			b[j]=m;
			j++;
		}
	}

	for(p=0;p<i;p++)
	{
		for(q=0;q<i-1;q++)
		if(a[q]>a[q+1])
		{
			m=a[q];
			a[q]=a[q+1];
			a[q+1]=m;
		}
	}
	
	for(p=0;p<j;p++)
	{
		for(q=0;q<j-1;q++)
		if(b[q]<b[q+1])
		{
			m=b[q];
			b[q]=b[q+1];
			b[q+1]=m;
		}
	}
	for(p=0;p<i;p++)
	{
		printf("%.2lf ",a[p]);
	}
	for(p=0;p<j;p++)
	{
		if(p)printf(" ");
		printf("%.2lf",b[p]);
	}	
}
