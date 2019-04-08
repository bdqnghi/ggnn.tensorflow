
main()
{
	int *a,*b;
	int i,j,n,min,x;
	char cc;
	a=(int*)malloc(26*sizeof(int));
	b=(int*)malloc(26*sizeof(int));
	scanf("%d",&n);	
	scanf("%c",&cc);
	for(i=0;i<n;i++)
	{
		for(j=0;j<26;j++)
		{
			*(a+j)=0;//a--????
			*(b+j)=0;//??????
		}
		while((cc<'a')||(cc>'z'))
		{
			scanf("%c",&cc);
		}
		j=1;
		while((cc>='a')&&(cc<='z'))
		{
			*(a+cc-'a')+=1;
			if(*(a+cc-'a')==1)
				*(b+cc-'a')=j;
			scanf("%c",&cc);
			j++;
		}
		min=100002;
		x=-1;
		for(j=0;j<26;j++)
		{
			if ((*(a+j)==1)&&(*(b+j)<min))//????‘j’?????????????
			{
				min=*(b+j);
				x=j;
			}
		}
		if(x<0)
		{
			printf("no\n");
		}
		else
		{
			printf("%c\n",'a'+x);
		}
	}
}

