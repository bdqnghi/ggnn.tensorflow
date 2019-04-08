void main()
{
	int n;
	scanf("%d\n",&n);
	int i;
	for(i=1;i<=n;i++)
	{
		char *pnew;
		pnew=(char *)malloc(100*sizeof(char));
		gets(pnew);
		int L=strlen(pnew);
		int judge=0;
		int j;

        if(*pnew=='_')
		{
			judge=1;
		for(j=1;j<L;j++)
		{
		if(*(pnew+j)=='_')
			judge=1;
		else if(*(pnew+j)<='z'&&*(pnew+j)>='a')
			judge=1;
		else if(*(pnew+j)<='Z'&&*(pnew+j)>='A')
			judge=1;
		else if(*(pnew+j)<='9'&&*(pnew+j)>='0')
			judge=1;
		else
		{
			judge=0;
			break;
		}
		}
		}

		else if(*pnew<='z'&&*pnew>='a')
		{
			judge=1;
		for(j=1;j<L;j++)
		{
		if(*(pnew+j)=='_')
			judge=1;
		else if(*(pnew+j)<='z'&&*(pnew+j)>='a')
			judge=1;
		else if(*(pnew+j)<='Z'&&*(pnew+j)>='A')
			judge=1;
		else if(*(pnew+j)<='9'&&*(pnew+j)>='0')
			judge=1;
		else
		{
			judge=0;
			break;
		}
		}
		}

		else if(*pnew<='Z'&&*pnew>='A')
		{
			judge=1;
		for(j=1;j<L;j++)
		{
		if(*(pnew+j)=='_')
			judge=1;
		else if(*(pnew+j)<='z'&&*(pnew+j)>='a')
			judge=1;
		else if(*(pnew+j)<='Z'&&*(pnew+j)>='A')
			judge=1;
		else if(*(pnew+j)<='9'&&*(pnew+j)>='0')
			judge=1;
		else
		{
			judge=0;
			break;
		}
		}
		}

		else
			judge=0;
		printf("%d\n",judge);
	}
}






