main()
{
	int a[300],l=0,num=0,max=0,sma=0,flag=0,i;
	char c;
	while (1)
	{
		scanf("%c",&c);
		if (num==0)
		{
			a[l]=c-'0';
			num=1;
		}
		else if (c==','||c=='\n')
		{
			num=0;
			l++;
		}
		else a[l]=a[l]*10+c-'0';
		if (c=='\n') break;
	}
	for (i=0;i<l;i++)
		if (a[i]>max) max=a[i];
	for (i=0;i<l;i++)
		if (a[i]>sma&&a[i]!=max) 
		{
			sma=a[i];
			flag=1;
		}
	if (flag==0) printf("No\n");
	else printf("%d\n",sma);
	return 0;
}