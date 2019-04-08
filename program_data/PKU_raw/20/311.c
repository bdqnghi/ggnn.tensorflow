void main()
{
	char str[14],substr[4],string[14];
	char max;
	int n,i,j;
	while(scanf("%s %s",str,substr)!=EOF)
	{
		max=str[0];
		n=0;
		for(i=1;str[i]!='\0';i++)
		{
			if(str[i]>max)
			{
				n=i;
				max=str[i];
			}
		}
		for(i=0;i<=n;i++)
			string[i]=str[i];
		for(i=n+1;i<=n+3;i++)
			string[i]=substr[i-n-1];
		for(i=n+4;str[i-3]!='\0';i++)
			string[i]=str[i-3];
		string[i]='\0';
		printf("%s\n",string);
	}
}



