main()
{
	char a[50],b[50];
	int i,t,n,c;
    scanf("%s %s",a,b);
	n=strlen(a);	
	for(i=0;;i++)
	{
		if (b[i]==a[0])
		{
			c=0;
			for(t=1;t<=n-1;t++)
			{
				if (b[i+t]==a[t])
				;
					else
				{
				c=-1;
				break;
				}
			}
			if (c==0)
			{
				printf("%d\n",i);
				break;
			}
		}
	}
}