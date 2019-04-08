int year[100];
double n,a,b,c,d;
int main()
{
	int i;
	scanf("%lf",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&year[i]);
		if(year[i]>=1&&year[i]<=18)
			a++;
		if(year[i]<=35&&year[i]>=19)
			b++;
		if(year[i]>=36&&year[i]<=60)
			c++;
		if(year[i]>60)
			d++;
	}
	a=(double)a/n*100;
	b=(double)b/n*100;
	c=(double)c/n*100;
	d=(double)d/n*100;
	printf("1-18: %.2lf%%\n",a);
	printf("19-35: %.2lf%%\n",b);
	printf("36-60: %.2lf%%\n",c);
	printf("60??: %.2lf%%",d);
	return 0;
}