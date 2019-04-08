int main()
{ 
	int num,i,m=0,n=0,j;
	scanf("%d",&num);
	double a[50],c[50],d[50],temp;
	char b[50][10];
	for(i=0;i<num;i++)
	{
		scanf("%s%lf",b[i],&a[i]);
	}
		for(i=0;i<num;i++)
	{ 
		if(b[i][0]=='m')
		{
			c[m]=a[i];
			m++;
		}
		if(b[i][0]=='f')
		{
			d[n]=a[i];
			n++;
		}
	}
		for(i=0;i<m;i++)
		{
			for(j=m-1;j>i;j--)
			{
				if(c[j-1]>c[j])
				{
					temp=c[j];
				   c[j]=c[j-1];
				   c[j-1]=temp;
				}
			}
		}
			for(i=0;i<n;i++)
		{
			for(j=n-1;j>i;j--)
			{
				if(d[j-1]<d[j])
				{
					temp=d[j];
				   d[j]=d[j-1];
				   d[j-1]=temp;
				}
			}
		}
         for(i=0;i<m;i++)
		{
			 printf("%.2lf ",c[i]);
		 }
		  for(i=0;i<n;i++)
		{
			  if(i!=n-1)
			 printf("%.2lf ",d[i]);
			  else
				  printf("%.2lf",d[i]);
		 }

	return 0;
}