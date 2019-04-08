int a[300];
int n;
float sum=0;
float ave;
int main()
{
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	ave=(float)sum/n;
	void sort();
	sort();
	int flag=0;
	if(ave-a[0]==a[n-1]-ave)
	{
		for(i=0;i<n;i++)
		{
			if(a[i]==a[0]||a[i]==a[n-1])
			{
				if(i!=0)
					printf(",");
				printf("%d",a[i]);
			}
		}
	}
	else if(ave-a[0]>a[n-1]-ave)
	{
		for(i=0;i<n;i++)
		{
			if(a[i]==a[0])
			{
				if(i!=0&&a[i+1]==a[i])
					printf(",");
				printf("%d",a[i]);
			}
		}
	}
	else
	{
		for(i=0;a[i];i++)
		{
			if(a[i]==a[n-1])
			{
                if(flag!=0)
					printf(",");
				printf("%d",a[i]);
				flag=1;
			}
		}
	}
	return 0;
}
void sort()
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=i;j<n;j++)
		{
			if(a[i]>a[j])
			{
				int t;
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
}