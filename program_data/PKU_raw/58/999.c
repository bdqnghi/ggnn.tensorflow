int main()
{
	int n,i, mm=0,j,len;
	char s[90];
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
	gets(s);len=strlen(s);
				for(j=0;j<len;j++)
				{
	             if(  (s[j]>=48&&s[j]<=57) ||  (s[j]>=65&&s[j]<=90)  || (s[j]>=97&&s[j]<=122)  ||  (s[j]=='_') )  mm=0;
				
				 else {mm=1;break;}}

				
	if(mm==0&&(s[0]=='_'||(s[0]>=65&&s[0]<=90)||  (s[0]>=97&&s[0]<=122) ))
		printf("1\n");
	else 
	 printf("0\n");
	
				}

	
	
return 0;
}
 