void main()
{
	int i,a[100],n,s=0;
	float sum=0,aver,b[100],t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	aver=sum/n;
	for(i=0;i<n;i++)
	{
		if(a[i]>aver)
			b[i]=a[i]-aver;
        else b[i]=aver-a[i];
		t=(t>=b[i])?t:b[i];
	}
	for(i=0;i<n;i++)
		if(b[i]==t)
		{
			s++;
		if(a[i]<aver)
		{
			printf("%d",a[i]);
		}
		}
	for(i=0;i<n;i++)
		if(a[i]>aver&&b[i]==t)
		{
			if(s==2)printf(",%d",a[i]);
			if(s==1)printf("%d",a[i]);
		}
}
	




