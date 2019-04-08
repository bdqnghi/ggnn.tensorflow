int Max=1,max=0,k,*p;
void f(int x)
{
	int i;
	int height=*(p+x);
	if(max>Max)
		Max=max;
	for(i=x+1;i<k;i++)
	{
		if(*(p+i)<=height)
		{
		    max+=1;
		    f(i);
		    max-=1;
		}
	}
}
void main()
{
	int i;
	scanf("%d",&k);
	p=(int*)malloc(k*sizeof(int));
	for(i=0;i<k;i++)
	    scanf("%d",p+i);
	for(i=0;k-i>Max,i<k;i++)
	{
		max+=1;
		f(i);
		max-=1;
	}
	printf("%d\n",Max);
}