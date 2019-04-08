int main()
{
	int n,i,j,k;
	double a=0.00,b=0.00,c=0.00,d=0.00;
	int p[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
	}
	for(i=0;i<n;i++)
	{
		if(1<=p[i]&&p[i]<=18)a++;
		if(19<=p[i]&&p[i]<=35)b++;
		if(36<=p[i]&&p[i]<=60)c++;
		if(61<=p[i]&&p[i]<120)d++;
	}
   printf("1-18: %.2lf%%\n",a/n*100);
	printf("19-35: %.2lf%%\n",b/n*100);
	 printf("36-60: %.2lf%%\n",c/n*100);
	printf("60??: %.2lf%%\n",d/n*100);
	return 0;
}