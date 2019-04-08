void main()
{
	int extent[10001],n,i,min,max;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int a,b,j;
		scanf("%d %d",&a,&b);
		if(i==0) 
		{
			min=a;
			max=b;
		}
		else
		{
			if(min>a) min=a;
			if(max<b) max=b;
		}
		for(j=2*a-1;j<=2*b-1;j++)
			extent[j]=1;
	}
	for(i=2*min-1;i<=2*max-1;i++)
		if(!extent[i]) break;
	if(i==2*max) printf("%d %d\n",min,max);
	else printf("no");
}