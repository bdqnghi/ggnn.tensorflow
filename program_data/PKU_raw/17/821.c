
int main()
{
	do{
		char s[101]={0},S[101]={0};
	int i,len,m;

	gets(s);
	strcpy(S,s);

    len=strlen(s);

	if(len==0)
		break;

	m=0;
	do{

     	for(i=m;i<len;i++)
		{
	       if(s[i]==')')
		   {  
	          break;
		}}

	       m=i;
		   
		   
		   if(m==len)
			   break;

		   else 
		   {
			   for(i=m;i>=0;i--)
		           if(s[i]=='(')
				   {
			          s[i]='1';
					  s[m]='1';
			          break;
				   }
		   }

		   m=m+1;

		   
	}while(1);

	for(i=0;i<len;i++)
	{
		if(s[i]=='(')
			s[i]='$';
		else if(s[i]==')')
			s[i]='?';
		else
			s[i]=' ';
	}

	printf("%s\n",S);
	puts(s);
	}while(1);


	return 0;
}




