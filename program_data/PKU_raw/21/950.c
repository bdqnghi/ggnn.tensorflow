int main()
{
	double x,t2;
	int n,i,j,t1,sum;
	int a[305]={0};
	double b[305]={0};
	scanf("%d",&n);
	sum=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
			a[i]=abs(a[i]);
		
		sum=sum+a[i];
	}
	x=(double)((double)sum/(double)n);
	for(i=0;i<n;i++)
	{
		b[i]=x-a[i];
		b[i]=fabs(b[i]);
	}

	for(j=0;j<n-1;j++)
	{
		for(i=0;i<n-j;i++)
		{
			if(b[i]<b[i+1])
			{
				t1=a[i];
				a[i]=a[i+1];
				a[i+1]=t1;
				t2=b[i];
				b[i]=b[i+1];
				b[i+1]=t2;


			}
		}
	}
	printf("%d",a[0]);
	for(i=1;i<n;i++)
	{
		if(b[i]==b[0])
		{
			printf(",%d",a[i]);
		}
		else
		{
			break;
		}
	}
}



