void main()
{
	int a[20],b[20],n,i,j,sum=0;
	float c1,d,d1,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(j=0;j<n;j++)
		scanf("%d",&b[j]);
	for(j=0;j<n;j++)
	{
		if(b[j]>89)
			c1=4.0;
		else if(b[j]>84)
			c1=3.7;
        else if(b[j]>81)
			c1=3.3;
        else if(b[j]>77)
			c1=3.0;
        else if(b[j]>71)
			c1=2.3;
        else if(b[j]>67)
			c1=2.0;
        else if(b[j]>63)
			c1=1.5;
        else if(b[j]>59)
			c1=1.0;
		else c1=0.0;
		d1=a[j]*c1;
		d=d+d1;}
	for(i=0;i<n;i++)
		sum=sum+a[i];
	k=d/sum;
	printf("%.2f",k);
}
