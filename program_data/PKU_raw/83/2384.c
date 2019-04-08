void main()
{
	int a[10],n,i,b[10],sum2=0;
	float GPA,c[10],sum1=0;
	scanf("%d",&n);
	for(i=0;i<=(n-1);i++)
	{
		scanf("%d",&a[i]);
	}
    for(i=0;i<=(n-1);i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<=9;i++)
	{
	if(b[i]>=90) c[i]=4.0;
	else if(b[i]>=85) c[i]=3.7;
		 else if(b[i]>=82) c[i]=3.3;
		      else if(b[i]>=78) c[i]=3.0;
		            else if(b[i]>=75) c[i]=2.7;
		                  else if(b[i]>=72) c[i]=2.3;
		                       else if(b[i]>=68) c[i]=2.0;
		                            else if(b[i]>=64) c[i]=1.5;
		                                 else if(b[i]>=60) c[i]=1.0;
		                                       else c[i]=0;
	}
		for(i=0;i<=(n-1);i++)
		{
			sum1=a[i]*c[i]+sum1;
		}
		for(i=0;i<=(n-1);i++)
		{
			sum2=a[i]+sum2;
		}
		GPA=sum1/sum2;
		printf("%.2f\n",GPA);
}
	



