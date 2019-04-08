int main()
{
	int num[100];
    int n,i,j,a,b,c,d;
	double a1,a2,a3,a4;
	scanf("%d",&n);
	for(j=0;j<n;j++)
		scanf("%d",&num[j]);
	a=0;
	for(j=0,a=0;j<n;j++)
	{
		if(num[j]<19) a++;
	}
	b=0;
	for(j=0,b=0;j<n;j++)
	{
		if(num[j]<36&&num[j]>18) b++;
	}

	c=0;
		for(j=0;j<n;j++)
				{
			if(num[j]<61&&num[j]>35) c++;
	}
	d=0;
	{   
		for(j=0;j<n;j++)
		if(num[j]>60) d++;
	}
	a1=(double)a/n*100;
	a2=(double)b/n*100;
	a3=(double)c/n*100;
	a4=(double)d/n*100;

	printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%\n",a1,a2,a3,a4);
	return 0;
}