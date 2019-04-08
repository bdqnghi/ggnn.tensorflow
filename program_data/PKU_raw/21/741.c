void main()
{
	int n,i,a[100],flag1,flag2=-1;
	double ave,sum=0.0,max=0.0,b[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	ave=(double)sum/n;
	for(i=0;i<n;i++)
	{b[i]=fabs(a[i]-ave);
	if(b[i]>max)
	{flag1=i,max=b[i];}
	if(b[i]==max)
		flag2=i;}
	if(flag2==1||flag1==flag2)
		printf("%d",a[flag1]);
	else if(a[flag1]-ave<0)
		printf("%d,%d",a[flag1],a[flag2]);
	else
		printf("%d,%d",a[flag2],a[flag1]);
return 0;
}