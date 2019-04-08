

int main()
{
	int n;
	int i,j,k;
	int sum1=0,sum2=0;
	char a[40][7];
	char t1[7];
	double sg[40];
	double t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s%lf",a[i],&sg[i]);
	}
	
	
	for(i=0;i<n;i++)
	{
		if(strcmp(a[i],"male")==0)
		{
			sum1++;
		}
	}
	sum2=n-sum1;
	



	for(j=1;j<n;j++)
	{
		for(i=0;i<n-j;i++)
		{
			if(strcmp(a[i],a[i+1])<=0)
			{
				strcpy(t1,a[i]),strcpy(a[i],a[i+1]),strcpy(a[i+1],t1);
				t=sg[i],sg[i]=sg[i+1],sg[i+1]=t;
			}
		}
	}
	


	for(j=1;j<sum1;j++)
	{
		for(i=0;i<sum1-j;i++)
		{
			if(sg[i]>=sg[i+1])
			{
				t=sg[i],sg[i]=sg[i+1],sg[i+1]=t;
			}
		}
	}

	for(j=1;j<sum2;j++)
	{
		for(i=0;i<sum2-j;i++)
		{
			if(sg[sum1+i]<=sg[sum1+i+1])
			{
				t=sg[sum1+i],sg[sum1+i]=sg[sum1+i+1],sg[sum1+i+1]=t;
			}
		}
	}

	for(i=0;i<n;i++)
	{
		if(i!=0)
		{
			printf(" ");
		}
		printf("%.2lf",sg[i]);
	}



	return 0;
}
