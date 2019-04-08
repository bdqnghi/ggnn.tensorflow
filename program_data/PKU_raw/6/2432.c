int main()
{
	int m,n;
	int a[10001];
	int *p;
	int i,j,k;
	int b,c;
	int s=0;
	p=&a[0];
	scanf("%d",&m);
	for(j=1;j<=m;j++)
	{
		scanf("%d %d",&b,&c);
		
		for(k=1;k<=b;k++)
		{
			for(i=1;i<=c;i++)
			{
				scanf("%d",p);
				if((k==1&&i!=1&&i!=c)||(k==b&&i!=1&&i!=c)||i==1||i==c)
				{
					s=s+*p;
				}
				p++;
			}

		}
		printf("%d\n",s);
		s=0;
		p=&a[0];

	}

	
	return 0;
}