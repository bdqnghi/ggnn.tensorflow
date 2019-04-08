void main()
{
	int *p,i,n,max,sec;
	p=(int *)(malloc(10000*sizeof(int)));
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	max=*p;
	sec=*p;
	for(i=1;i<n;i++)
	{
		if(*(p+i)>max) max=*(p+i);
		else if(*(p+i)>sec) sec=*(p+i);
	}
	printf("%d\n%d",max,sec);
}