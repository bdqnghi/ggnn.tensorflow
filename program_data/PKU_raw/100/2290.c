void main()
{
	int i,j,flag=0;
	char a[300];
	int b[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},c[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='A'&&a[i]<='Z') 
		{
			j=a[i]-'A';
			b[j]++;
			flag=1;
		}
		else if(a[i]>='a'&&a[i]<='z') 
		{
			j=a[i]-'a';
			c[j]++;
			flag=1;
		}

	}
	if(flag==0) printf("No");
	else
	{
	for(i=0;i<26;i++)
	{
		if(b[i]==0) 
		{
			
		}
		else
		{
			printf("%c=%d\n",i+'A',b[i]);
		}
	}
	for(i=0;i<26;i++)
	{
		if(c[i]==0) 
		{
			
		}
		else
		{
			printf("%c=%d\n",i+'a',c[i]);
		}
	}
	}

}