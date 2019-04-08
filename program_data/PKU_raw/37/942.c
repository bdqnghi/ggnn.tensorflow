void main()
{
	int n,i,pd=0,l,j,no=0;
	char zf[100000],*ptr;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",zf);
		l=strlen(zf);
		ptr=&zf[0];
		for(;*ptr!='\0';ptr++)
		{
			for(j=0;j<l;j++)
			{
				if(*ptr==zf[j])
					pd++;
			}
			if(pd==1)
			{
				printf("%c\n",*ptr);
				no=1;
				pd=0;
				break;
			}
			pd=0;
		}
		if(no==0)
		{
			printf("no\n");
		}
		no=0;
	}
}