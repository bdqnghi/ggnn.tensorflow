void main()
{
	int a[100000];
	int n, i;
	double b = 0, c = 0, d = 0, e = 0;
	scanf("%d",&n);
	for (i = 0; i<n; i++)
	{
		scanf("%d",&a[i]);
		if (a[i] <= 18)
			b = b + 1;
		else if(a[i]>18&&a[i]<=35)
			c = c + 1;
        else if(a[i]>35&&a[i]<=60)
			d = d + 1;
        else
			e = e + 1;
	}
	b = (b/n)*100;
	c = (c/n)*100;
	d = (d/n)*100;
	e = (e/n)*100;
	printf("1-18: %.2lf%%\n",b);
    printf("19-35: %.2lf%%\n",c);
    printf("36-60: %.2lf%%\n",d);
    printf("60??: %.2lf%%\n",e);
}