void main()
{
	int p[100]={0},n1=0,n2=0,n3=0,n4=0,i,n;
    double b1=0,b2=0,b3=0,b4=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
	}
	for(i=0;i<n;i++)
	{
		if(p[i]>=0&&p[i]<=18)
			n1++;
		else if(p[i]>=19&&p[i]<=35)
			n2++;
        else if(p[i]>=36&&p[i]<=60)
			n3++;
         else if(p[i]>=61)
			n4++;
	}
	b1=(double)n1/n*100;
b2=(double)n2/n*100;
b3=(double)n3/n*100;
b4=(double)n4/n*100;
printf("1-18: %.2f",b1);
printf("%%\n");
printf("19-35: %.2f",b2);
printf("%%\n");
printf("36-60: %.2f",b3);
printf("%%\n");
printf("60??: %.2f",b4);
printf("%%");
}

