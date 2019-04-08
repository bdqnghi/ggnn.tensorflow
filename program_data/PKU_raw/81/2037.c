trans(int a[][5],int n, int m)
{
	if (n > 4||m > 4||n < 0||m < 0)
		return 0;
	else
	{
		int (*p)[5],(*q)[5];
		int i,k;
		p = a + m;
		q = a + n;
		for(i = 0;i < 5;i++)
		{
			k = *(*p + i);
			*(*p + i) = *(*q + i);
			*(*q + i) = k;
		}
	}
		return 1;
}
main()
{
	int a[5][5];
	int (*p)[5] = a;
	int i,j,k,l,s;
	for (k = 0;k < 5;k++)
	{
		for (l = 0;l < 5;l++)
			scanf("%d",(*(p+k)+l));
	}
    scanf("%d%d",&i,&j);
	s = trans(a,i,j);
	if (s == 0)
		printf("error");
	else
	{
        for (k = 0;k < 5;k++)
		{
             printf("%d",a[k][0]);
		     for (l = 1;l < 5;l++)
			 {
				 printf(" %d",*(*(p+k)+l));
			 }
			 printf("\n");
		}
	}
}
			     
