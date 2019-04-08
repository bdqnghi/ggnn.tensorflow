void main()
{
	int n,i,a[100];
    double first=0,second=0,third=0,fourth=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	  scanf("%d",&a[i]);
	  if(a[i]<19)
	    first=first+1;
		else if(a[i]<36)
     	second=second+1;
		else if(a[i]<61)
        third=third+1;
		else fourth=fourth+1;

	}
	printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%\n",first*100/n,second*100/n,third*100/n,fourth*100/n);
}