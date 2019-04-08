void main()
{
	int i,j,n,t=0;
	char (*str)[81],p[2];
	scanf("%d",&n);
	gets(p);
	str=(char (*)[81])malloc(n*sizeof(char)*81);
	for(i=0;i<n;i++)
		gets(*(str+i));
	for(i=0;i<n;i++)
	{
		t=0;
		if(**(str+i)>='a'&&**(str+i)<='z'||**(str+i)>='A'&&**(str+i)<='Z'||**(str+i)=='_')
		{
			for(j=1;*(*(str+i)+j)!='\0';j++)
			{
				if(!(*(*(str+i)+j)>='a'&&*(*(str+i)+j)<='z'||*(*(str+i)+j)>='A'&&*(*(str+i)+j)<='Z'||*(*(str+i)+j)=='_'||*(*(str+i)+j)>='0'&&*(*(str+i)+j)<='9')){printf("0\n");t=1;break;}
			}
			if(t==0)printf("1\n");
		}
		else printf("0\n");
	}
}