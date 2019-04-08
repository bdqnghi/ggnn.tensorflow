void main()
{
	int a[300],n,i,b,c,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
			scanf("%d",&a[i]);
    for(i=0,b=0;i<n;i++)
	{
		c=1;
		for(j=0;j<i;j++)
			if(a[i]==a[j])c=0;

			if(c)
			{
				if(b>0)printf(",");
				printf("%d",a[i]);
				b++;
			}
	}
}