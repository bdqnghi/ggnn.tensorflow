int prime(int x)
{ 
	int j;
	for(j=2;j<x;j++)
    { if(x%j==0)  return 0;  }
	              return 1;
}
int prime(int x);
main()
{
	int n,a,b,x;
	scanf("%d",&n);
	if(n<5)
    printf("empty");
    else
    for(x=2;x<=n-2;x++)
    {
		a=prime(x);
		b=prime(x+2);
		if(a&&b)
			printf("%d %d\n",x,(x+2));
	}
}