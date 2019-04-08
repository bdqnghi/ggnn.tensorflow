void main()
{
	int l1,max,l2,i,l;
	char str[100],substr[100];
	while (scanf("%s%s",str,substr)!=EOF)
	{
		l1=strlen(str);
		max=0;
		for (i=0;i<l1;i++)
			if (str[i]>max)
			{max=str[i];l=i;}
		l2=strlen(substr);
		for (i=l1-1;i>l;i--)
			str[i+l2]=str[i];
		for (i=0;i<l2;i++)
			str[l+i+1]=substr[i];
		for (i=0;i<l1+l2;i++)
			printf("%c",str[i]);
		printf("\n");		
	}
}