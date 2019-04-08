
int main()
{
	int n,i;
	double a=0,b=0,c=0,d=0;
	scanf("%d",&n);
	int s[100]={0};
	for(i=0;i<n;i++)
	{
		scanf("%d",&(s[i]));
		if(s[i]<=18)
		{
			a++;
		}
		if((s[i]<=35)&&(s[i]>18))
		{
			b++;
		}
		if((s[i]<=60)&&(s[i]>35))
		{
			c++;
		}
		if(s[i]>60)
		{
			d++;
		}
	}
	a/=n;
	b/=n;
	c/=n;
	d/=n;
	
	printf("1-18: %.2lf%%\n",a*100.0);
	printf("19-35: %.2lf%%\n",b*100.0);
	printf("36-60: %.2lf%%\n",c*100.0);
	printf("60??: %.2lf%%\n",d*100.0);
	return 0;
}