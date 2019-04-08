int main()
{
	int i,n,j;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		char s[21]={0};
		scanf("%s",s);
		int k=strlen(s),w=0;
		for(j=0;j<k;j++)
		{
			if(j==0&&s[j]>='0'&&s[j]<='9')
			{
				printf("no\n");
				break;
			}

			if((s[j]>='a'&&s[j]<='z')||(s[j]>='A'&&s[j]<='Z')||(s[j]>='0'&&s[j]<='9')||s[j]=='_')
				w++;
		}
		if(s[0]>='0'&&s[0]<='9')
			continue;
		if(w==k)
			printf("yes\n");
		else
			printf("no\n");
	}
	
	return 0;
}
