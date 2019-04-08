void main()
{
	int a[9]={0},b[9]={0},j,i,n;
	float c=0,d=0,e;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
		c=c+a[i];
	}
	for(j=0;j<=n-1;j++)
	{
		scanf("%d",&b[j]);
		if(b[j]>=90)e=4.0;
		else if(b[j]>=85)e=3.7;
		else if(b[j]>=82)e=3.3;
		else if(b[j]>=78)e=3.0;
		else if(b[j]>=75)e=2.7;
		else if(b[j]>=72)e=2.3;
		else if(b[j]>=68)e=2.0;
		else if(b[j]>=64)e=1.5;
		else if(b[j]>=60)e=1.0;
		else e=0;
		d=d+a[j]*e;
	}
	c=d/c;
	printf("%.2f",c);
}