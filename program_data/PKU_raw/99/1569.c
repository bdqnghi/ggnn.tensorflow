int main()
{
	int n,i,j;
	int a[100];
	double youerbili,chengrenbili,zhongnianbili,laonianbili;
	int youer=0,chengren=0,zhongnian=0,laonian=0;
	scanf("%d", &n);
	for(i=0;i<n;i++)
		scanf("%d", &a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]<=18)
			youer+=1;
		else if(a[i]>18&&a[i]<=35)
			chengren+=1;
		else if(a[i]>=36&&a[i]<=60)
			zhongnian+=1;
		else
			laonian+=1;
	}
	youerbili=(double)youer/(double)n*100;
	chengrenbili=(double)chengren/(double)n*100;
	zhongnianbili=(double)zhongnian/(double)n*100;
	laonianbili=(double)laonian/(double)n*100;
	printf("1-18: %.2lf%%\n",youerbili);
	printf("19-35: %.2lf%%\n",chengrenbili);
	printf("36-60: %.2lf%%\n",zhongnianbili);
	printf("60??: %.2lf%%\n",laonianbili);
	return 0;
}