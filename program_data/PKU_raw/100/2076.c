int main()
{
	char  a[300];
	int i,j,k,l;
	gets(a);
	for(i='A';i<='A'+'Z'-'A';i++)
	{
		k=0;
		for(j=0;j<strlen(a);j++)
		{
			if(a[j]==i)
			{
				k++;
			}
			
		}
		if(k!=0)
				printf("%c=%d\n",i,k);
	}
	for(i='a';i<='a'+'z'-'a';i++)
	{
		k=0;
		for(j=0;j<strlen(a);j++)
		{
			if(a[j]==i)
			{
				k++;
			}
			
		}
			if(k!=0)
				printf("%c=%d\n",i,k);
	}
	l=0;
	for(i='A';i<='A'+'Z'-'A';i++)
	{
		for(j=0;j<strlen(a);j++)
		{
			if(a[j]==i)
			{
				l++;
			}
			
		}
	}
	for(i='a';i<='a'+'z'-'a';i++)
	{
		for(j=0;j<strlen(a);j++)
		{
			if(a[j]==i)
			{
				l++;
			}
			
		}
	
	}
	if(l==0)
		printf("No\n");

	
	return 0;
}


