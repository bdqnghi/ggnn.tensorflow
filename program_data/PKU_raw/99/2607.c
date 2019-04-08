
int main(int argc, char* argv[])
{
	int i,n,a[100];
	double b1=0,b2=0,b3=0,b4=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]>0&&a[i]<=18)
			b1++;
		else if(a[i]>=19&&a[i]<=35)
			b2++;
		else if(a[i]>=36&&a[i]<=60)
			b3++;
		else
			b4++;
	}
	printf("1-18: %.2lf%%\n",100*b1/n);
	printf("19-35: %.2lf%%\n",100*b2/n);
	printf("36-60: %.2lf%%\n",100*b3/n);
	printf("60??: %.2lf%%\n",100*b4/n);
	return 0;
}



