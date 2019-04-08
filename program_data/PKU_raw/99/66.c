void main()
{

	int a[100];
	int n;
	double b1=0,b2=0,b3=0,b4=0;
	int i;
	double sum;

	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);


	for(i=0;i<n;i++)
       if(a[i]<=18)
            b1++;
	   else if(a[i]<=35)
		   b2++;
	   else if(a[i]<=60)
		   b3++;
	   else
		   b4++;
	sum=(b1+b2+b3+b4)*0.01;
	printf("1-18: %.2lf%%\n",b1/sum);
	printf("19-35: %.2lf%%\n",b2/sum);
	printf("36-60: %.2lf%%\n",b3/sum);
	printf("60??: %.2lf%%\n",b4/sum);



		

}