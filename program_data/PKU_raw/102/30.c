int main()
{
	struct pe{char a[10];double h;}pe[40];
	int n,i,j=0,k=0,q;
	double m[500],f[500],temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s%lf",&pe[i].a,&pe[i].h);
	}
	for(i=0;i<n;i++)
	{
		if(pe[i].a[0]=='m')
		{
			m[j]=pe[i].h;
		    j++;
		
		}
		if(pe[i].a[0]=='f')
		{
			f[k]=pe[i].h;
		    k++;	
		}
	}
	for(i=0;i<=j-1-1;i++)
	{
		for(q=0;q<j-1-i;q++)
		{
	       if(m[q]>m[q+1])
		   {
			   temp=m[q];
				m[q]=m[q+1];
				m[q+1]=temp;
		   }
		}
	}
	for(i=0;i<=k-1-1;i++)
	{
		for(q=0;q<k-1-i;q++)
		{
	       if(f[q]>f[q+1])
		   {
			   temp=f[q];
				f[q]=f[q+1];
				f[q+1]=temp;
		   }
		}
	}

	printf("%.2lf",m[0]);
	for(i=1;i<j;i++)
	{
	printf(" %.2lf",m[i]);
	}
    for(i=0;i<k;i++)
	{
		printf(" %.2lf",f[k-1-i]);
	}
return 0;
}
