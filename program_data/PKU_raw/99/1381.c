
int main()
{
	int n,i;
	int a[100];
	double b[100];
	int x,y,z,t;
	scanf("%d",&n);
    for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	x=0;
	y=0;
	z=0;
	t=0;
    for(i=0;i<n;i++)
	{
		if(a[i]<=18)
          x++;
		if(a[i]>=36&&a[i]<=60)
		z++;
		if(a[i]>=61)
        t++;
		if(a[i]>=19&&a[i]<=35)
		y++;
	}
    b[0]=(double)x/n;
    b[1]=(double)y/n;
    b[2]=(double)z/n;
    b[3]=(double)t/n;
	printf("1-18: %.2lf%%\n",b[0]*100);
    printf("19-35: %.2lf%%\n",b[1]*100);
    printf("36-60: %.2lf%%\n",b[2]*100);
    printf("60??: %.2lf%%\n",b[3]*100);
	return 0;
}