
void main()
{
	int a[100],n,b=0,c=0,d=0,e=0,i;
	float u,x,y,z,f=1;
    scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n;i++)
	{
		if(a[i]<=18) b=b+1;
		if(a[i]>18&&a[i]<=35) c=c+1;
		if(a[i]>=36&&a[i]<=60) d=d+1;
		if(a[i]>60) e=e+1;
	}
	u=f*b/n*100;
	x=f*c/n*100;
	y=f*d/n*100;
	z=f*e/n*100;
	printf("1-18: %.2f%\n",u);
	printf("19-35: %.2f%\n",x);
	printf("36-60: %.2f%\n",y);
	printf("60??: %.2f%\n",z);
}