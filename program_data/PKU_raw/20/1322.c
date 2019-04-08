int main()
{
	char str[14],substr[4];
	int i,b,j;	
    while (scanf("%s%s",str,substr)!=EOF)
	{
		b=0;		
		 for(i=0;i<10;i++)
		{if(str[b]<str[i]) b=i;}
		for(i=12;i>(b+3);i--)
			str[i]=str[i-3];
		for(i=(b+1);i<(b+4);i++)
		str[i]=substr[i-b-1];
		printf("%s\n",str);
		for(j=0;j<13;j++)
			str[j]='\0';
	}        
	return 0;
}