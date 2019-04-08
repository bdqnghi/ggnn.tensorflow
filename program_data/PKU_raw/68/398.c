main()
{
	int m,a,b,c,d,e;
	scanf("%d", &m);
	printf("6=3+3\n8=3+5\n10=3+7\n12=5+7\n");
	for (a=14;a<=m;a=a+2)
	{
		for(b=3;b<a;b=b+2)
		{
			d=a-b;
			for (c=3;c<sqrt(b);c=c+2)
				if (b%c==0) break;
			for (e=3;e<sqrt(d);e=e+2)
			    if (d%e==0) break;
			
            if (c>sqrt(b))
			{
				if (e>sqrt(d)) break;
			}
		}
	    printf("%d=%d+%d\n", a, b, d);
	}
}