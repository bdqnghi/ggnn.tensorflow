void main()
{
	int i,n,num[300],sum=0,real=0;
	double aver,cha=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
		sum=sum+num[i];
	}
	aver=(double)sum/n;
	for(i=0;i<n;i++)
		cha=(fabs(num[i]-aver)>cha)?fabs(num[i]-aver):cha;
	for(i=0;i<n;i++)
	{
		if((fabs(fabs(num[i]-aver)-cha)<=0.00001)&&(real==0))
		{printf("%d",num[i]);
		real=1;}
		else if(fabs(fabs(num[i]-aver)-cha)<=0.00001)
			printf(",%d",num[i]);
	}
}