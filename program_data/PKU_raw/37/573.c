
void main()
{
	int n;
	char str[100000];
	int i,j,k=0;
	int flag=0;
	int len=0;
	scanf("%d",&n);
	gets(str);
	for(i=0;i<n;i++)
	{
		k=0;
		len=0;
		j=0;
		flag=0;
		gets(str);
		len=strlen(str);
		for(j=0;j<len;j++,flag=0)
		{	
			for(k=0;k<len;k++)
			{
				if(str[k]==str[j])
				{
					flag++;
				}
			}
			if(flag==1)
			{
				printf("%c\n",str[j]);
				break;
			}
			else
			{
				if(j==len-1)
				{
					printf("no\n");
					break;
				}
			}
		}
	}
}
