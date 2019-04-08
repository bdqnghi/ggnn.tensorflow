
int main()
{
	int n,a[100];
	double a18=0.0,a19=0.0,a36=0.0,a61=0.0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]<=18) a18++;
		if(a[i]<=35&&a[i]>=19) a19++;
		if(a[i]<=60&&a[i]>=36) a36++;
		if(a[i]>=61) a61++;
	}
	a18=(double)(a18/n*100);
a19=(double)(a19/n*100);
		a36=(double)(a36/n*100);
		a61=(double)(a61/n*100);
	printf("1-18: %.2lf%%\n",a18);
	printf("19-35: %.2lf%%\n",a19);
	printf("36-60: %.2lf%%\n",a36);
	printf("60??: %.2lf%%\n",a61);
	return 0;
}
