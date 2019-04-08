void main()
{
	int i,j,x=0;
	float m=0,k,b[300],c[300],d,a[300],n;
	scanf("%f",&n);
	for(i=0;i<n;i++)
		scanf("%f",&a[i]);
	for(i=0;i<n;i++)
	{
		m=m+a[i];
	}
	k=m/n;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				d=a[j];
				a[j]=a[j+1];
				a[j+1]=d;
			}

		}
	}
		for(i=0;i<n;i++)
		{
			if(a[i]>=k)
			b[i]=a[i]-k;
			else
				b[i]=k-a[i];

		}

		for(i=0;i<n;i++)
			c[i]=b[i];


	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(c[j]<c[j+1])
			{
			    d=c[j];
				c[j]=c[j+1];
				c[j+1]=d;
			}

		}
	}
	for(i=0;i<n;i++)
		{
			if(b[i]==c[0])
			{
				
				if(x!=0)
				printf(",%d",(int)a[i]);
				else
					printf("%d",(int)a[i]);
				x++;
			}
		}



	}

