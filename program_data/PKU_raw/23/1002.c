void main()
{
	char s1[100];
	int i,j,num;
	gets(s1);
	num=strlen(s1);
	for(i=num-1;i>=0;i--)
	{
		if(s1[i]==' ') 
		{
			for(j=i+1;(s1[j]!=' '&& s1[j]!='\0');j++)
			{
				printf("%c",s1[j]);
			}
			printf(" ");
		}
		if(i==0)
			for(j=i;(s1[j]!=' '&& s1[j]!='\0');j++)
			{
				printf("%c",s1[j]);
			}
	}
}