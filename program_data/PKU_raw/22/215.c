void main()
{
	unsigned i,t,a[300],j=1;
	char c;
	scanf("%d",&a[0]);
	for(i=1;;i++)
	{
		scanf("%c",&c);
		if(c==10)break;
		else 
		{
			scanf("%d",&a[j]);
			j++;
		}
	}
	if(i==1)printf("No");
	else 
	{
		t=a[0];
		for(i=0;i<j;i++)if(a[i]>t)t=a[i];
		for(i=0;i<j;i++)if(a[i]==t)a[i]=0;
		t=a[0];
		for(i=0;i<j;i++)if(a[i]>t)t=a[i];
		if(t==0)printf("No");
		else printf("%d",t);
	}
}
