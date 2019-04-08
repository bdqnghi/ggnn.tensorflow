main()
{
	int a,b,c,d;
	scanf("%d",&a);
	while(a!=1)
	{ if (a&2!=0) {printf("%d*3+1=%d\n",a,a*3+1);a=a*3+1;}
	else {printf("%d/2=%d\n",a,a/2);a=a/2;}
    }
	if (a==1) printf("End");
}