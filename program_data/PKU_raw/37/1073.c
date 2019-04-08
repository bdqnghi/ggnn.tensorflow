void main()
{
	int t,i,j,len,d;
	char str[100000];
	scanf("%d",&t);
	for(d=0;d<t;d++)
	{
		scanf("%s",str);
		len=strlen(str);
		for(i=0;i<len;i++)
		{
			for(j=0;j<len;j++)
			{
				if(i==j)
				{
				
					continue;
				}
				else if(str[i]==str[j])
					break;
			}
			if(j>=len)
			{
				printf("%c\n",str[i]);
				break;
			}
		}
		if(i>=len)
			printf("no\n");
	}
}

