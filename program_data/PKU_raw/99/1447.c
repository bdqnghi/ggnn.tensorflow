int main()
{
    int n,a[100],b1=0,b2=0,b3=0,b4=0,i;
	double c1,c2,c3,c4;
	c1=0.0;
	c2=0.0;
	c3=0.0;
	c4=0.0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<=18)
		{
			b1++;
		}
		if(a[i]>18&&a[i]<=35)
		{
			b2++;
		}
		if(a[i]>35&&a[i]<=60)
		{
			b3++;
		}
		if(a[i]>60){
			b4++;
		}
	}
	c1=(double)b1*100/n;
	c2=(double)b2*100/n;
	c3=(double)b3*100/n;
	c4=(double)b4*100/n;
	printf("1-18: %.2lf%%\n",c1);
    printf("19-35: %.2lf%%\n",c2);
    printf("36-60: %.2lf%%\n",c3);
    printf("60??: %.2lf%%\n",c4);
	return 0;
}