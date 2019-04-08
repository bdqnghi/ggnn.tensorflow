int main()
{
	int n,i,a[100];
	double b=0,c=0,d=0,f=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<=18)
			b++;
		else if((a[i]<=35)&&(a[i]>=19))
			c++;
		else if((a[i]<=60)&&(a[i]>=36))
			d++;
		else
			f++;
	}
	printf("1-18: %.2lf%%\n",b/(b+c+d+f)*100.0);
	printf("19-35: %.2lf%%\n",c/(b+c+d+f)*100.0);
	printf("36-60: %.2lf%%\n",d/(b+c+d+f)*100.0);
	printf("60??: %.2lf%%\n",f/(b+c+d+f)*100.0);
	return 0;

}