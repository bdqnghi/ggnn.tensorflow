int main()
{
	int a[100],n,i,c;
	double d,e,b[100];
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
		scanf("%d",&a[i]);
	for(i=0;i<=n-1;i++)
		scanf("%lf",&b[i]);
	for(i=0;i<=n-1;i++)
	{
		if(b[i]>=90)
			b[i]=4.0;
			else 
				if(b[i]>=85)
					b[i]=3.7;
				else
					if(b[i]>=82)
						b[i]=3.3;
					else
						if(b[i]>=78)
							b[i]=3.0;
						else
							if(b[i]>=75)
								b[i]=2.7;
							else
								if(b[i]>=72)
									b[i]=2.3;
								else
									if(b[i]>=68)
										b[i]=2.0;
									else
										if(b[i]>=64)
											b[i]=1.5;
										else
											if(b[i]>=60)
												b[i]=1.0;
											else
												b[i]=0;
	}
	for(i=0;i<=n-1;i++)
		b[i]=a[i]*b[i];
	for(i=0,c=0;i<=n-1;i++)
		c=c+a[i];
	for(i=0,d=0;i<=n-1;i++)
		d=d+b[i];
	e=d/c;
	printf("%.2lf\n",e);
	return 0;
}

	
