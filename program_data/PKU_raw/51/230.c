void main()
{
	int n, len, a[501], sign, max, *pa;
	char str[501]={'\0'}, *ps,*pj, *pk;
	scanf("%d",&n);
	scanf("%s",str);
	len=strlen(str);
	for(ps=str, pa=a; ps<(str+len); ps++, pa++)
	{
		*pa=1;
		for(pj=ps+1; pj<(ps+1+len); pj++)
		{
			sign=0;
			for(pk=pj; pk<pj+n; pk++)
			{
				if(*pk != *(ps + (pk-pj) ) )
				{
					sign=1;
					break;
				}
			}
			if(sign==0)
				(*pa)++;
		}
	}//????
	for(max=0, pa=a; pa<(a+len); pa++)
	{
		if(*pa>max)
			max = *pa;
	}
	if(max<=1)
		printf("NO\n");
	else
	{
		printf("%d\n",max);
		for(ps=str, pa=a; ps<(str+len); ps++, pa++)
		{
			if(*pa==max)
			{
				for(pk=ps; pk<(ps+n); pk++)
					printf("%c",*pk);
				printf("\n");
			}
		}
	}
}