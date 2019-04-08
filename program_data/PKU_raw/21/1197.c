int main()
{
	int n,i=0,j=0,k=0;
	float a[310];
	float sum=0,aver;
	float b[310],c[310],max,tem;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%f",&a[i]);
	}

	for(i=1;i<=n;i++)
	{
		sum=sum+a[i];
	}
	aver=sum/n;

	for(i=1;i<=n;i++)
	{
		b[i]=a[i]-aver;
		if(b[i]<0)
		{
			b[i]=-b[i];
		}
	}

	max=b[1];
	for(i=1;i<=n;i++)
	{
		if(b[i]>max)
			max=b[i];
	}

	for(i=1;i<=n;i++)
	{
		if(b[i]==max)
		{
			j=j+1;
			c[j]=a[i];
		}
	}

	if(j==1)
	{
		printf("%.f",c[1]);
	}
	else
	{
		for(i=j;i>1;i--)
		{
			for(k=1;k<i;k++)
			{
				if(c[k]>c[k+1])
				{
					tem=c[k];
					c[k]=c[k+1];
					c[k+1]=tem;
				}
			}
		}

		printf("%.f",c[1]);
		for(i=2;i<=j;i++)
		{
			printf(",%.f",c[j]);
		}
	}



	return 0;
}