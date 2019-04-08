void main()
{
	int i,a,n,ag1=0,ag2=0,ag3=0,ag4=0;
	double p1,p2,p3,p4;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		if(a<=18)ag1++;
		else if(a<=35)ag2++;
		else if(a<=60)ag3++;
		else ag4++;

	}
	p1=(double)ag1/(double)n*100;
	p2=(double)ag2/(double)n*100;
	p3=(double)ag3/(double)n*100;
	p4=(double)ag4/(double)n*100;
	printf("1-18: %.2lf",p1);
    printf("%%\n");
	printf("19-35: %.2lf",p2);
    printf("%%\n");
	printf("36-60: %.2lf",p3);
    printf("%%\n");
	printf("60??: %.2lf",p4);
    printf("%%\n");
}