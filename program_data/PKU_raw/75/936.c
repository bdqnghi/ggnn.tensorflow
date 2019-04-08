main()
{
	int i,t,n,num,max=0;
	int in[1000],out[1000];
	char a;
	for(i=0;;i++)
	{
		scanf("%d",&in[i]);
		scanf("%c",&a);
		if(a=='\n') break;
	}
	for(i=0;;i++)
	{
		scanf("%d",&out[i]);
		scanf("%c",&a);
		if(a=='\n') break;
	}
	n=i+1;
	printf("%d ",n);
	for(t=0;t<1000;t++)
	{
		num=0;
		for(i=0;i<n;i++)
			if(t>=in[i]&&t<out[i]) num++;
		if(num>max) max=num;
	}
	printf("%d\n",max);
}