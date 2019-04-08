void main()
{
	char str[15],substr[4],k;
	int i,j,t;
	while (scanf("%s%s",str,substr)!=EOF)
	{
		for(k=i=0;str[i]!=0;i++)
			if(str[i]>k)
			{
				k=str[i];
				j=i;
			}
		for(t=i+3;t>j+3;t--)
			str[t]=str[t-3];
		for(i=0;i<3;i++)
			str[j+1+i]=substr[i];
		printf("%s\n",str);
	}
}