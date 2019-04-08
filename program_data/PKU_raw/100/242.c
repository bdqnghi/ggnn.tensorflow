void main()
{
	char str[300],t;
	int a[300]={0};
	int i,j,k,f=0;
	scanf("%s",str);
		for(i=0;i<strlen(str)-1;i++)
	{
		k=i;
		for(j=i+1;j<strlen(str);j++)
		{
			if(str[j]<str[k])
		    k=j;
		}
			t=str[k];str[k]=str[i];str[i]=t;

	}
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]>=97&&str[i]<=122)
		{
			a[i]=1;
			for(j=i+1;j<strlen(str);j++)
			{if(str[j]==str[i])
				{
					a[i]++;
					str[j]='0';
				}
			}
		}
	}


	for(i=0;i<strlen(str);i++)
	{
		if(str[i]>=97&&str[i]<=122)
		{
			f=1;
			printf("%c=%d\n",str[i],a[i]);
		}
	}
	if(f==0)
		printf("No");
}