void main()
{
	int n,i,b=0,c=0,d=0,e=0,a[100]={0};
	double f,g,h,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	    if(a[i]>=1&&a[i]<=18)b++;
		if(a[i]>=19&&a[i]<=35)c++;
		if(a[i]>=36&&a[i]<=60)d++;
		if(a[i]>=61)e++;
	}
	f=(double)b/n;
	g=(double)c/n;
	h=(double)d/n;
	j=(double)e/n;
    printf("1-18: %.2lf",100*f);
	printf("%%\n");
	printf("19-35: %.2lf",100*g);
	printf("%%\n");
	printf("36-60: %.2lf",100*h);
	printf("%%\n");
	printf("60??: %.2lf",100*j);
	printf("%%\n");

}