void main()
{
    int n,a,b,f=0,s;
	scanf("%d\n",&n);
    scanf("%d\n",&a);
	for(;100>n&&n>1;n--)
	{
		
		scanf("%d\n",&b);
		b=a>b?a:b;
	    if(f<=b)
		{	s=f;
			f=b;
		}
		   else
			   s=b>s?b:s;

		
	}
    printf("%d\n",f);
	printf("%d",s);

}
