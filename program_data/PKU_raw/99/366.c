int main()
{
	int i,n,x=0,y=0,z=0,p=0,a;
	double X,Y,Z,P;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
	
		if(a>=1&&a<=18)x++;
		if(a>=19&&a<=35)y++;
		if(a>=36&&a<=60)z++;
		if(a>60)p++;
		
	}
	X=1.0*x/n*100;
	Y=1.0*y/n*100;
	Z=1.0*z/n*100;
	P=1.0*p/n*100;
	
	printf("1-18: %.2lf%%\n",X);
	printf("19-35: %.2lf%%\n",Y);
    printf("36-60: %.2lf%%\n",Z);
    printf("60??: %.2lf%%",P);
	
	return 0;


	

}