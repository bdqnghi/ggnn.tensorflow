void main()
{
	int n,a[10],b[10],i,sum=0;
	float d[10],gpa=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		scanf("%d",&b[i]);
	for(i=n;i<10;i++)
	{
		a[i]=0;
        b[i]=0;
	}
	for(i=0;i<n;i++)
	{
		if(b[i]<60)
		{	d[i]=0;continue;}
		else if(b[i]>=90)
		{d[i]=4.0;continue;}
		else if(b[i]>=85)
		{	d[i]=3.7;continue;}
		else if(b[i]>=82)
		{	d[i]=3.3;continue;}
		else if(b[i]>=78)
		{	d[i]=3.0;continue;}
		else if(b[i]>=75)
		{	d[i]=2.7;continue;}
		else if(b[i]>=72)
		{	d[i]=2.3;continue;}
		else if(b[i]>=68)
		{	d[i]=2.0;continue;}
		else if(b[i]>=64)
		{d[i]=1.5;continue;}
		else if(b[i]>=60)
		{	d[i]=1.0;continue;}
		}
	for(i=n;i<10;i++)d[i]=0;
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
		gpa=gpa+a[i]*d[i];
	}
	gpa=gpa/sum;
	printf("%.2f",gpa);
}
