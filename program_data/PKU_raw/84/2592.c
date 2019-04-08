void main()
{
	int ch[100],i,max,max1,n;
	scanf("%d\n",&n);
	for(i=0;i<n-1;i++)
	scanf("%d\n",&ch[i]);
	scanf("%d",&ch[n-1]);
	max=ch[0];
	max1=ch[0];
	for(i=0;i<n;i++)
	{
		if(max<ch[i])
		max=ch[i];
	}
	printf("%d\n",max);
	for(i=0;i<n;i++)
	{
		if(max1<ch[i]&&ch[i]!=max)
			max1=ch[i];
	}
	printf("%d",max1);
}




		