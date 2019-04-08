void main()
{
	int a[300],i=0,n,max,second;
	char c;
	scanf("%d%c",&a[i],&c);
	while(c==',')
		scanf("%d%c",&a[++i],&c);
	n=i+1;
	max=a[0];
	second=-10000;
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			second=max;
			max=a[i];
		}
		else if(a[i]<max&&a[i]>second)
			second=a[i];
	}
	if(second==-10000)
		printf("No");
	else
		printf("%d",second);
}