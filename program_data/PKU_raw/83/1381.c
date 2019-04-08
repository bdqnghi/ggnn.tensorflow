void main()
{
	int n;
	scanf("%d\n",&n);
	int a[100],b[100],j,sum1=0;
	float GPA,c[100],sum=0;
	for(j=0;j<=n-1;j++)scanf("%d",&a[j]);
	for(j=0;j<=n-1;j++)scanf("%d",&b[j]);
	for(j=0;j<=n-1;j++)
	{   
		if(90<=b[j]) c[j]=4.0;
		else if(85<=b[j]) c[j]=3.7;
		else if(82<=b[j]) c[j]=3.3;
		else if(78<=b[j]) c[j]=3.0;
		else if(75<=b[j]) c[j]=2.7;
		else if(72<=b[j]) c[j]=2.3;
		else if(68<=b[j]) c[j]=2.0;
		else if(64<=b[j]) c[j]=1.5;
		else if(60<=b[j]) c[j]=1.0;
		else c[j]=0.0;
	}
	for(j=0;j<=n-1;j++)sum=sum+a[j]*c[j];
	for(j=0;j<=n-1;j++)sum1=sum1+a[j];
	GPA=sum/sum1;
	printf("%.2f\n",GPA);
}
