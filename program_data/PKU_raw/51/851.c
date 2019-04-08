int main()
{
	int n,i,j,k,len,max=1,mark=0;
	char s[505],temp[5];
	struct example
	{
		int word;
		int num;
	}a[505];
	scanf("%d",&n);
	scanf("%s",s);
	len=strlen(s);
	for(i=0;i<len-n+1;i++)
	{
		a[i].word=0;a[i].num=1;
		for(j=0;j<n;j++)
		{
			a[i].word=a[i].word*100+s[i+j]-32;
		}
	}
	i=0;
	for(i=0;i<len-n+1;i++)
	{
		for(j=i+1;j<len-n+1;j++)
		{
			if(a[i].word!=0&&a[i].word==a[j].word)
			{
				a[i].num++;
				a[j].word=0;
			}
		}
	
	}
	for(i=0;i<len-n+1;i++)
	{
		if(a[i].num>max)
			max=a[i].num;
	}
	if(max==1)
		printf("NO");
	else
	{
		printf("%d\n",max);
   
	for(i=0;i<len-n+1;i++)
	{
		if(a[i].num==max)
		{
			for(j=0;j<n;j++)
			{
				printf("%c",s[i+j]);
			}
			printf("\n");
		}
	}
	}

	return 0;
}