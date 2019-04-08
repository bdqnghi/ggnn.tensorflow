void main()
{
	char s[9000];
	int i=0,t=0,j=0;
	gets(s);
	while(s[i]!='\0')
	{
	     if(s[i]!=' ')
			 j++;
		 else
		 {
			 if(j!=0)
			    printf("%d,",j);
			 j=0;
		 }
		 i++;
	}
	
	printf("%d",j);
}
