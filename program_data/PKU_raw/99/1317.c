
int main()
{
	int n;
	cin >> n;
	int x=0,a=0,b=0,c=0,d=0;
	for (int i=1;i<=n;i++)
	{
		cin >> x;
		if (x<=18) a++;
		if (x>=19 && x<=35) b++;
		if (x>=36 && x<=60) c++;
		if (x>=61) d++;
	}
	printf("1-18: %.2lf%%\n",(double) a/n*100);
	printf("19-35: %.2lf%%\n",(double) b/n*100);
	printf("36-60: %.2lf%%\n",(double) c/n*100);
	printf("60??: %.2lf%%\n",(double) d/n*100);
	return 0;
}