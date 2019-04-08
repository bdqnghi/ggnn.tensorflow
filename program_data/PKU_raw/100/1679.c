int main()
{
	int l,b[26]={0},c[26]={0},m=0,i;
	char a[300];
	scanf("%s",a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		if(a[i]<='z'&&a[i]>='A')
		{
		if(a[i]<='Z'&&a[i]>='A')
		{
			b[a[i]-'A']++;
		}
		if(a[i]<='z'&&a[i]>='a')
		{
			c[a[i]-'a']++;
		}
		m++;
		}
	
	}
	if(m==0)
	{
		printf("No\n");
	}
	else
	{
		for(i=0;i<26;i++)
		{
			if(b[i]!=0)
			{
			     printf("%c=%d\n",'A'+i,b[i]);
			  }
		}
		for(i=0;i<26;i++)
		{
	    	if(c[i]!=0)
			{
	        	printf("%c=%d\n",'a'+i,c[i]);
			}
		}
	}
	return 0;
}