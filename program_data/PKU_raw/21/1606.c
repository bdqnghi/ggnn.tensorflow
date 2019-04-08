int main()
{
	unsigned int n,a[300],i,j=0,sum=0,b[300];
	double average,ch,max=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	average=(double)sum/n;
	for(i=0;i<n;i++)
	{
		if(a[i]==average)
			continue;
		if(a[i]>average)
			ch=a[i]-average;
		if(a[i]<average)
			ch=average-a[i];
		if(ch==max)
		{
			j++;
			b[j]=a[i];
		}
		if(ch>max)
		{
			j=0;
			max=ch;
			b[j]=a[i];
		}
	}
	for(i=1;i<j;i++)
	{
		int k,t;
		for(k=i;k>0;k--)
		{
			if(b[k]<b[k-1])
			{
				t=b[k];
				b[k]=b[k-1];
				b[k-1]=t;
			}
		}
	}
	printf("%d",b[0]);
	for(i=1;i<=j;i++)
		printf(",%d",b[i]);
	return 0;
}