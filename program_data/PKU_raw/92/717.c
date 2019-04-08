void main()
{
	
	int a[1000],b[1000],n,i,j,max,c[1000],num,t,s,k;
	for(k=0;k<1000;k++)
	{
		num=0;max=0;
	scanf("%d",&n);
	if(n==0)break;
	for(i=0;i<n;i++)
		scanf("%d",&b[i]);
    for(i=0;i<n;i++)
		scanf("%d",&a[i]);

        for(j=0;j<n-1;j++)
		for(i=0;i<n-1-j;i++)
		{
			if(a[i]<a[i+1])
			{
				t=a[i];
	            a[i]=a[i+1];
				a[i+1]=t;
			}
			if(b[i]<b[i+1])
			{
				s=b[i];
				b[i]=b[i+1];
				b[i+1]=s;
			}
		}

	for(i=0;i<n;i++)
			{
			if(b[i]>a[i])
				num=num+200;
			if(b[i]<a[i])
				num=num-200;
			}
			c[n-1]=num;
			
        for(j=0;j<n-1;j++)
		{
			num=0;
t=b[n-1];
            for(i=0;i<n-1;i++)
			{
				
				b[n-1-i]=b[n-2-i];
				
			}
b[0]=t;
			for(i=0;i<n;i++)
			{
			if(b[i]>a[i])
				num=num+200;
			if(b[i]<a[i])
				num=num-200;
			}
			c[j]=num;
		}
		max=c[0];
for(j=0;j<n;j++)
			if(c[j]>max)
				max=c[j];
	
		
		printf("%d\n",max);
	}
	

    

}