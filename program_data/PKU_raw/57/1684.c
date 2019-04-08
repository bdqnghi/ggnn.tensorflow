int main()
{
	int m;
	scanf("%d", &m);
	int i,len;
	for(i=0;i<m;i++)
	{
		char s1[100];
    	scanf("%s", s1);
	    len=strlen(s1);
	    if((int)s1[len-1]==114)
		{
			s1[len-2]='\0';
		    printf("%s\n", s1);
		}
	    else if((int)s1[len-1]==121)
		{
	    	s1[len-2]='\0';
	    	printf("%s\n", s1);
		}
       else
	   {
		    s1[len-3]='\0';
	    	printf("%s\n", s1);
	   }
	}
	return 0;
}
