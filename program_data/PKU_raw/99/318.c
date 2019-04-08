int main()
{
	int n,i,a[100],n1=0,n2=0,n3=0,n4=0;
	double A,b,c,d;
		scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]<19)
			n1++;
		else if(a[i]>18&&a[i]<36)
			n2++;
		else if(a[i]>35&&a[i]<61)
			n3++;
		else n4++;
	}
	A=(double)n1/n*100;
	b=(double)n2/n*100;
	c=(double)n3/n*100;
	d=(double)n4/n*100;
	printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%",A,b,c,d);
 return 0;
}