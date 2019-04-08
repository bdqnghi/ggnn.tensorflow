char main()
{
	int t,i,j,k,b=0,c;
	char a[100000];
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%s",a);
	
		for(j=0;j<100000;j++)
		{
			if(a[j]=='\0')
				break;
		}
		for(k=0;k<j;k++)
		{
			b=0;
			for(c=0;c<j;c++)
			{
				if((a[k]==a[c]) && (k!=c))
				{
					b=1;
					break;
				}
			}
			if(b==0)
			{
				printf("%c\n",a[k]);
				break;
			}
		}
		if(b==1)
		
				printf("no\n");
	}
		
		return 0;

		}


