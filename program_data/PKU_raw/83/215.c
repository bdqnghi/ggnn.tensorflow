void main()
{
	int n,i;
	int a[9];int b[9];
	float c[9];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		scanf("%d",&b[i]);
	float f(int a,int b);
	for(i=0;i<n;i++)
		c[i]=f(a[i],b[i]);
    float sum1=0;int sum2=0;
	for(i=0;i<n;i++)
	{sum1+=c[i];sum2+=a[i];}
	float GPA;
	GPA=sum1/sum2;
	printf("%.2f\n",GPA);
}
float f(int a,int b)
{
	float c;
	if(b>=90&&b<=100)c=4.0;
	else if(b>=85&&b<=89)c=3.7;
	else if(b>=82&&b<=84)c=3.3;
	else if(b>=78&&b<=81)c=3.0;
	else if(b>=75&&b<=77)c=2.7;
	else if(b>=72&&b<=74)c=2.3;
	else if(b>=68&&b<=71)c=2.0;
	else if(b>=64&&b<=67)c=1.5;
	else if(b>=60&&b<=63)c=1.0;
	else c=0;
	return(c*a);
}