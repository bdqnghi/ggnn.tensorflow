
int main(int argc, char* argv[])
{
	int n,a[100],i;
	double num1=0,num2=0,num3=0,num4=0,s,r1,r2,r3,r4;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>=1&&a[i]<=18)
		{
			num1++;
		}
		if(a[i]>=19&&a[i]<=35)
		{
			num2++;
		}
		if(a[i]>=36&&a[i]<=60)
		{
			num3++;
		}
		if(a[i]>60)
		{
			num4++;
		}
	}
	s=num1+num2+num3+num4;
	r1=num1*100/s;
	r2=num2*100/s;
	r3=num3*100/s;
	r4=num4*100/s;
	printf("1-18: %.2lf%%\n",r1);
	printf("19-35: %.2lf%%\n",r2);
	printf("36-60: %.2lf%%\n",r3);
	printf("60??: %.2lf%%",r4);






	return 0;
}