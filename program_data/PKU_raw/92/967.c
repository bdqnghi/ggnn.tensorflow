int cmp(const void* a,const void* b)
{
	return *(int*)b-*(int*)a;
}
main()
{
	int a[1005],a1,a2;
	int b[1005],b1,b2;
	int i,n,r,BL;
	while (1)
	{
		scanf("%d",&n);
		if (n==0)
			break;
		for (i=0;i<n;i++)
			scanf("%d",&a[i]);
		a1=0;
		a2=n-1;
		for (i=0;i<n;i++)
			scanf("%d",&b[i]);
		BL=0;
		while (BL==0)
		{
			BL=1;
			for (i=0;i<n-1;i++)
				if (a[i]<a[i+1])
				{
					int tmp;
					tmp=a[i];a[i]=a[i+1];a[i+1]=tmp;
					BL=0;
				}
		}
		BL=0;
		while (BL==0)
		{
			BL=1;
			for (i=0;i<n-1;i++)
				if (b[i]<b[i+1])
				{
					int tmp;
					tmp=b[i];b[i]=b[i+1];b[i+1]=tmp;
					BL=0;
				}
		}
		b1=0;
		b2=n-1;
		r=0;
		while (n>0)
		{
			if (a[a1]>b[b1])
			{
				r++;
				a1++;
				b1++;
				n--;
			}
			else
				if (a[a1]<b[b1])
				{
					r--;
					a2--;
					b1++;
					n--;
				}
				else
					if (a[a2]>b[b2])
					{
						r++;
						a2--;
						b2--;
						n--;
					}
					else
						if (a[a2]<b[b2])
						{
							r--;
							a2--;
							b1++;
							n--;
						}
						else
							if (a[a2]==b[b1])
							{
								a2--;
								b1++;
								n--;
							}
							else
							{
								r--;
								a2--;
								b1++;
								n--;
							}
		}
		printf("%d\n",r*200);
	}
}

