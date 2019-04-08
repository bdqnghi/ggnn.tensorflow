int main()
{
	int n,i,m;
	char str[50] ,s[50][50];
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		gets(str);
		m=strlen(str)-2;
		s[i][m]=0;
		strncpy(s[i],str,m);
		
	    if(s[i][m-1]==105)
		{
			s[i][m-1]=0;
			strncpy(s[i],str,m-1);
			
		}
		
	}
	for(i=0;i<n;i++)
		printf("%s\n",s[i]);
	return 0;
	
}