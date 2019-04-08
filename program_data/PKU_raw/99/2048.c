void main()
{
	int n,i,age[100];
	int sum1=0;
	int sum2=0;
	int sum3=0;
	int sum4=0;
	int a,b,c,d;
	double percentage1;
	double percentage2;
	double percentage3;
	double percentage4;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&age[i]);
	for(i=0;i<n;i++)
	{
		if(age[i]<=18)
			sum1=sum1+1;
		if(age[i]<=35&&age[i]>=19)
			sum2=sum2+1;
       	if(age[i]<=60&&age[i]>=36)
			sum3=sum3+1;    
        if(age[i]>=61)
			sum4=sum4+1;
	}
	    a=100*sum1;
		b=100*sum2;
		c=100*sum3;
		d=100*sum4;
        percentage1=(double)a/n;
		percentage2=(double)b/n;
		percentage3=(double)c/n;
		percentage4=(double)d/n;

	printf("1-18: %.2f%%\n19-35: %.2f%%\n36-60: %.2f%%\n60??: %.2f%%",percentage1,percentage2,percentage3,percentage4);
}