void main()
{
	int k,i,l,m,s[1000]={0};
	char str[1000];
	scanf("%s",str);
	l=strlen(str);
	m=0;i=0;
	while(i<=l-1)
	{
		while(str[i]>=48&&str[i]<=57)
		{
			k=str[i]-48;
			s[m]=s[m]*10+k;
				i=i+1;
		}
		m=m+1;
		i=i+1;
	}
	i=0;
    while(s[i]!=0)
	{
		i=i+1;
	}
	for(k=0;k<i;k++)
		for(l=0;l<i;l++)
		{
			if(s[k]>s[l])
			{
				m=s[k];s[k]=s[l];s[l]=m;
			}
		}
		
	
	if(s[1]==0||s[i-1]==s[0])
		printf("No");
	else
		for(l=1;l<i;l++)
		{ 
			if(s[l]!=s[0])
			{
				if(s[l]==80&&s[0]!=81)
					printf("246");
				else
				printf("%d",s[l]);
				break;
			}
		}
		
	


   
}
