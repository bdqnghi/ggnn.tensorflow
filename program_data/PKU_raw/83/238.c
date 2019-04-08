void main()
{
	int n,i,a[10],b[10],e[10],mark[10];
	float GPA,c=0,d=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
		c=c+b[i];
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if((a[i]>=90)&&(a[i]<=100))
			mark[i]=40;
		else if((a[i]>=85)&&(a[i]<=89))
			mark[i]=37;
		else if((a[i]>=82)&&(a[i]<=84))
			mark[i]=33;
		else if((a[i]>=78)&&(a[i]<=81))
			mark[i]=30;
		else if((a[i]>=75)&&(a[i]<=77))
			mark[i]=27;
		else if((a[i]>=72)&&(a[i]<=74))
			mark[i]=23;
		else if((a[i]>=68)&&(a[i]<=71))
			mark[i]=20;
		else if((a[i]>=64)&&(a[i]<=67))
			mark[i]=15;
		else if((a[i]>=60)&&(a[i]<=63))
			mark[i]=10;
		else mark[i]=0;
	}
	for(i=0;i<n;i++)
	{
		e[i]=b[i]*mark[i];
		d=d+e[i];
	}
	GPA=d/(c*10);
	printf("%.2f\n",GPA);
}