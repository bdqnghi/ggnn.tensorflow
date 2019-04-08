int main()
{
    int n;
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		char s[10002];
		scanf("%s",s);
		int len;
		len=strlen(s);
		int k;
		int j;
		
		for(k=0;k<len;k++)
		{
			int number=0;
			for(j=0;j<len;j++)
			{
				if(s[k]==s[j])
				{
					number++;
				}
			}
			if(number==1)
			{
				printf("%c\n",s[k]);
				break;
			}
			if(k==len-1&&number!=1)
			{
				printf("no\n");
			}

		}
	}
	return 0;

}