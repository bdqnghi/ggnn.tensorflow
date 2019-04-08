int main()
{
	int n,a[300],i,sum=0,m=0,c[2],j=0;
	float aver,cha[300],max;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	aver=(float)sum/n;
	for(i=0;i<n;i++)
	{
		if(a[i]>aver)
			cha[i]=(float)(a[i]-aver);
		else
			cha[i]=(float)(aver-a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(cha[i]>max)
			max=cha[i];
	}
	for(i=0;i<n;i++)
	{
		if(cha[i]==max)
		{
			c[j]=a[i];
			j++;
			m++;

		}
	}
	if(m==1)
		printf("%d\n",c[0]);
	else
		printf("%d,%d\n",c[0],c[1]);
}