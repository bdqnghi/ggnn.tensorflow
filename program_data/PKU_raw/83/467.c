void main()
{
	int i,k=0,n,a[10],b[10];
	float c,m=0,GPA;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		scanf("%d",&b[i]);
	for(i=0;i<n;i++)
	{
		if(b[i]>=90&&b[i]<=100) c=4.0;
		else if(b[i]>=85) c=3.7;
		else if(b[i]>=82) c=3.3;
		else if(b[i]>=78) c=3.0;
		else if(b[i]>=75) c=2.7;
		else if(b[i]>=72) c=2.3;
		else if(b[i]>=68) c=2.0;
		else if(b[i]>=64) c=1.5;
		else if(b[i]>=60) c=1.0;
		else if(b[i]>=0) c=0;
		m=m+a[i]*c;
		k=k+a[i];
	}
	GPA=m/k;
	printf("%.2f\n",GPA);
}