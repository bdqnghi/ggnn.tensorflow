void main()
{
	int n,i;
	float a[10],b[10],s[10],jd,xfjd,gpa,sum1=0,sum2=0;
	float jidian(float f);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%f",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%f",&s[i]);
	}
	for(i=0;i<n;i++)
	{
		jd=jidian(s[i]);
		xfjd=a[i]*jd;
		b[i]=xfjd;
	}
	for(i=0;i<n;i++)
	{
		sum1+=b[i];
	}
	for(i=0;i<n;i++)
	{
		sum2+=a[i];
	}
	gpa=sum1/sum2;
	printf("%.2f\n",gpa);
}
float jidian(float f)
{
	float j;
	if(f<=100&&f>=90) j=4;
	else if(f<=89&&f>=85) j=3.7;
	else if(f<=84&&f>=82) j=3.3;
	else if(f<=81&&f>=78) j=3.0;
	else if(f<=77&&f>=75) j=2.7;
	else if(f<=74&&f>=72) j=2.3;
	else if(f<=71&&f>=68) j=2.0;
	else if(f<=67&&f>=64) j=1.5;
	else if(f<=62&&f>=60) j=1.0;
	else if(f<60) j=0;
	return j;
}




