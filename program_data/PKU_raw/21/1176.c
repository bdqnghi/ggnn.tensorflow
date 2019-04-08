int main()
{
	int n,a[300],i,sum=0,*p;
	float average;
	void array(int array[],int x);
	scanf("%d",&n);
	for(p=a;p<a+n;p++)
	{
		scanf("%d",p);
	}
	array(a,n);
	for(i=0;i<n;i++)
	{
		sum+=a[i];
	}
	average=(float)sum/n;
	if((float)(a[0]-average)==(float)(average-a[n-1]))
	{
		for(p=a;p<a+n;p++)
		{
			if(*p-average==a[0]-average||average-a[n-1]==average-*p)
			{
				if(p==a)
					printf("%d",*p);
				else
					printf(",%d",*p);
			}
		}
	}
	else if((float)(a[0]-average)<(float)(average-a[n-1]))
	{
		for(p=a;p<a+n;p++)
		{
			if(*p-average==a[0]-average)
			{
				if(p==a)
					printf("%d",*p);
				else
					printf(",%d",*p);
			}
		}
	}
	else
	{
		for(p=a;p<a+n;p++)
		{
			if(average-a[n-1]==average-*p)
			{
				if(p==a+n-1)
					printf("%d",*p);
				else
					printf("%d,",*p);
			}
		}
	}
	return 0;
}
void array(int array[],int x)
{
	int i,j,temp;
	for(i=0;i<x-1;i++)
	{
		for(j=0;j<x-1-i;j++)
		{
			if(array[j]>array[j+1])
			{
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
}
