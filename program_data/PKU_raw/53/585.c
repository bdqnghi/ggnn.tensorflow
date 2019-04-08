void main()
{
	int i,n,m;int w;char a[300];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	char * p1;char * p2;
	m=strlen(a);
	for(p1=a;p1<(a+m);p1++)
	{
		w=1;
		for(p2=a;p2<p1;p2++)
		{
			if(*p2==*p1)
			{
				w=0;break;
			}
		}
		if(w==1&&p1==a)printf("%d",*p1);
		else if(w==1&&p1!=a)
    	printf(",%d",*p1);
	}
}
