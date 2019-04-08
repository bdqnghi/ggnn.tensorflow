int main()
{
	int a[50]={0},b[50]={0};
	int i,k=0,m,n;
	float j=0,l;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	scanf("%d",&b[i]);
	for(i=0;i<n;i++)
	{
		if(b[i]>=90&&b[i]<=100)
		j=4*a[i]+j;
		if(b[i]>=85&&b[i]<=89)
		j=3.7*a[i]+j;
		if(b[i]>=82&&b[i]<=84)
		j=3.3*a[i]+j;
		if(b[i]>=78&&b[i]<=81)
		j=3*a[i]+j;
		if(b[i]>=75&&b[i]<=77)
		j=2.7*a[i]+j;
		if(b[i]>=72&&b[i]<=74)
		j=2.3*a[i]+j;
		if(b[i]>=68&&b[i]<=71)
		j=2*a[i]+j;
		if(b[i]>=64&&b[i]<=67)
		j=1.5*a[i]+j;
		if(b[i]>=60&&b[i]<=63)
		j=1*a[i]+j;
		if(b[i]<60)
		j=0*a[i]+j;
	}
	for(i=0;i<n;i++)
	k=k+a[i];
	l=(float)j/(float)k;
	printf("%.2f",l);
}


