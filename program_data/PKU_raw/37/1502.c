int main()
{
	
	int t,i,n=0,j=0,k;
	char s[110000];
	scanf("%d\n",&t);
	for(i=0;i<t;i++)
	{
		scanf("%s",s);
		for(j=0;s[j]!='\0';j++)
		{
			for(k=0;s[k]!='\0';k++)
			{
				if(s[k]==s[j])
					n++;
			}
			if(n==1)
			{
				
				printf("%c\n",s[j]);
				n=0;
				break;
			}
			else
			{
				n=0;
			}
			

		}
		if(s[j]=='\0')
			{
				printf("no\n");
			    n=0;
			}
	}

	return 0;
}