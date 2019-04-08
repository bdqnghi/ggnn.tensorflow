
main()
{
	int n;scanf("%d",&n);
	int a[300];
	int i=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	float avr;
	float sum=0;
	for(i=0;i<n;i++){sum=sum+a[i];}
	avr=sum/n;
	float cha[300];
	for(i=0;i<n;i++){cha[i]=fabs(a[i]-avr);}
	for(i=0;i<n;i++)
	{
		int j;float x;int y;
		for(j=i+1;j<n;j++)
		{if(cha[i]<cha[j]){x=cha[i];cha[i]=cha[j];cha[j]=x;y=a[i];a[i]=a[j];a[j]=y;}}
	}
	printf("%d",a[0]);
	for(i=1;i<n;i++){if(cha[i]==cha[0])printf(",%d",a[i]);}
}
