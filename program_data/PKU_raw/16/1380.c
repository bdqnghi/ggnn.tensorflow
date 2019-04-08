int main()
{
	int a,n,b,c,d,e,f,g;
	scanf("%d",&n);
	b=0;
	a=n;
	if (n==0)
		printf("0");
	else
	while(a>0)
	{ 
	  a=(int)(a/10);
	  b=b+1;
	}
    c=n%10;
	d=(int)(n/10)%10;
	e=(int)(n/100)%10;
    f=(int)(n/1000)%10;
	g=(int)(n/10000);
	switch (b)
	{case 1:printf("%d\n",n);break;
   	 case 2:printf("%d%d\n",c,d);
		 break;		   
	 case 3:
		    printf("%d%d%d\n",c,d,e);
			break;
     case 4:
		   printf("%d%d%d%d\n",c,d,e,f);
			break;
   	case 5:
		   printf("%d%d%d%d%d\n",c,d,e,f,g);
			break;
	}
	return 0;
}
