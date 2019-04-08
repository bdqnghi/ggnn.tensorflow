int main()
{
	int n,i,j,s,mm,ff;
	double b[41],m[41],f[41],c;
	char a[41][7];
	scanf("%d",&n);
	mm=ff=0;
	for(i=0;i<n;i++)
	{
		
		scanf("%s",a[i]);
		scanf("%lf",&b[i]);
		if(a[i][0]=='m')
		{
			m[mm]=b[i];
			mm++;
		}
		if(a[i][0]=='f')
		{
			f[ff]=b[i];
			ff++;
		}
	}
	
	for(i=0;i<mm-1;i++)
	{
		for(j=0;j<mm-1-i;j++)
		{
			if(m[j]>m[j+1])
			{
				c=m[j];
				m[j]=m[j+1];
				m[j+1]=c;
			}
		}
	}
	for(i=0;i<ff-1;i++)
	{
		for(j=0;j<ff-1-i;j++)
		{
			if(f[j]<f[j+1])
			{
				c=f[j];
				f[j]=f[j+1];
				f[j+1]=c;
			}
		}
	}
	for(i=0;i<mm;i++)
	{
		printf("%.2lf ",m[i]);
	}
	for(i=0;i<ff;i++)
	{
		if(i==ff-1)
			printf("%.2lf",f[i]);
		else
			printf("%.2lf ",f[i]);
	}
	
	
	return 0;
}
