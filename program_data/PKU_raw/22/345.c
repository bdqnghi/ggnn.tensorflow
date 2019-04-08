void main()
{
	int a[310],b,i,j,k;
	char x;
	scanf("%d%c",&a[1],&x);
	if(x=='\n')
		printf("No\n");
	else
	{
		for(i=2;;i++)
		{
			scanf("%d%c",&a[i],&x);
			if(x=='\n')
				break;
		}
		for(j=1;j<=i;j++)
		{
			for(k=1;k<=i-j;k++)
			{
				if(a[k]>a[k+1])
				{
					b=a[k];
					a[k]=a[k+1];
					a[k+1]=b;
				}
			}
		}
		for(j=i-1;j>=1;j--)
		{
			if(a[j]<a[i])
				break;
		}
		if(j>=1)
		    printf("%d\n",a[j]);
		else
			printf("No\n");
	}
}


