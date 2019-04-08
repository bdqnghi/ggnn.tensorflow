

void main()
{
	char n,i;
	int a[N],*p,max,*pmax;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	max=a[0];
	for(p=a;p<a+n;p++)
		if(max<*p)
			max=*p;
	printf("%d\n",max);
	if(max!=a[0])
		pmax=a;
	else
		pmax=a+1;
	for(p=a;p<a+n;p++)
		if(*pmax<*p&&*p<max)
			pmax=p;
	printf("%d",*pmax);
}