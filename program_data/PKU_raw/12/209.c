void main()
{
	int a[20],i,m,n,k;
	for(;;)
	{
		k=0;
		scanf("%d",&a[0]);
		if(a[0]==-1)
			break;
		for(i=1;;i++)
		{
			scanf("%d",&a[i]);
			if(a[i]==0)
				break;
		}
		for(m=0;m<i;m++)
			for(n=0;n<i;n++)
				if(a[m]==2*a[n])
					k++;
		printf("%d\n",k);
	}
}
			