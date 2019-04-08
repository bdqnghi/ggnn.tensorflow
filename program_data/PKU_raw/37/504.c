void main()
{
	int i,j,k,n,t=0,m=0;
	char (*str)[100000],p[2];
	scanf("%d",&n);
	gets(p);
	str=(char (*)[100000])malloc(n*sizeof(char)*100000);
	for(i=0;i<n;i++)
		gets(*(str+i));
	for(i=0;i<n;i++)
	{
		m=0;
		for(j=0;*(*(str+i)+j)!='\0';j++)
		{
			for(k=0;*(*(str+i)+k)!='\0';k++)
			{
				if(*(*(str+i)+j)==*(*(str+i)+k)&&j!=k){t=1;break;}
			}
			if(t==0){printf("%c\n",*(*(str+i)+j));m=1;break;}
			t=0;
		}
		if(m==0)printf("no\n");
	}
}