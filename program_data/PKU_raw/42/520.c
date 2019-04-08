void main()
{
    int n,m;
    int a[100001];
    int *p;
    scanf("%d",&n);
    for(p=a;p<a+n;p++)
    scanf("%d",p);
    scanf("%d",&m);
    for(p=a;p<(a+n);p++)
    {
    	if(*p==m)
    	{
    		int *q;
    		for(q=p;q<(a+n-1);q++)
    		*q=*(q+1);
    		n=n-1;
    		p=p-1;
    	}
    }
    for(p=a;p<a+n-1;p++)
    printf("%d ",*p);
    printf("%d",*p);
}