main()
{
	int i,j,k,num=0,tot,a[16],b[1000];
	do
	{
		i=0;
		tot=0;
		do
		{
			scanf("%d",&a[i]);
			i++;
		}
		while (a[i-1]>0);
		if (a[0]!=-1)
		{
			for (j=0;j<=i-3;j++)
				for (k=j+1;k<=i-2;k++)
					if (a[j]==2*a[k]||a[k]==2*a[j]) tot++;
		    b[num]=tot;
		    num++;
		}
	}
	while (a[0]!=-1);
	for (i=0;i<num;i++)
		printf("%d\n",b[i]);
	return 0;
}