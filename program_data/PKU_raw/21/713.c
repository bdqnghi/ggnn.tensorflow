
void main()
{
	int n,i,sum=0,flag=0;float max=0,p;
	int a[300];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	p=(float)sum/n;
	//printf("%f\n",p);
	//printf("%d\n",fabs(a[0]-p));
	for(i=0;i<n;i++)
	{
		if((a[i]-p>max)||(p-a[i]>max))
			max=fabs(a[i]-p);
	}
	//printf("%f\n",max);
	for(i=0;i<n;i++)
	{
		//printf("%f\n%f\n",fabs(a[i]-p)-max,pow(10,-6));
		if(fabs(fabs(a[i]-p)-max)<pow(10,-6))
		{
			if(flag==0) {printf("%d",a[i]);flag=1;}
			else printf(",%d",a[i]);
		}
	}
}

