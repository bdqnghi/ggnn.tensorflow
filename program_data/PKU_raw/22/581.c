main()
{
	int a[300],i,max=0,mid=0;
	char c;
	for(i=0;;i++)
	{
		scanf("%d",&a[i]);
		c=getchar();
        if(c=='\n') break;
		else
		{
			if(max<a[i])
			{
				mid=max;max=a[i];
			}
		else if(a[i]>mid&&a[i]<max) 
		{
		mid=a[i];
		}}
	}
	if(max<a[i]) {mid=max;max=a[i];}
		else if(a[i]>mid&&a[i]<max) mid=a[i];
	if(max==mid||mid==0) printf("No");
	else printf("%d\n",mid);
	return 0;
}
