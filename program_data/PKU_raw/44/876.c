void main()
{
    int a,b,c,d,e,f;
    int reverse(int a);
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    scanf("%d",&e);
    scanf("%d",&f);
    a=reverse(a);
    b=reverse(b);
    c=reverse(c);
    d=reverse(d);
    e=reverse(e);
    f=reverse(f);
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
    printf("%d\n",d);
    printf("%d\n",e);
    printf("%d\n",f);
}
int reverse(int a)
{
	int b[10];
	int i=0,j;
	if(a>0)
	{
	while(a>0)
    {
    	b[i]=a%10;
    	a=(a-b[i])/10;
    	i=i+1;
    }
    for(j=0;j<i;j++)
    {
    	a=a*10+b[j];
    }
	}
	else if(a==0)a=0;
	else if(a<0)
	{
	a=-a;
	while(a>0)
    {
    	b[i]=a%10;
    	a=(a-b[i])/10;
    	i=i+1;
    }
    for(j=0;j<i;j++)
    {
    	a=a*10+b[j];
    }
    a=-a;
	}
    return (a);
}