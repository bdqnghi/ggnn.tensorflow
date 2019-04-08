
int main()
{
	int i,j;
	char s[1000];
	gets(s);
    for(i=0;s[i]!='\0';i++)
	{
		
	     printf("%c",s[i]);
		 if(s[i]==' ')
		 {
			 
			 for(j=i+1;s[j]==' ';j++)
			 {
		     	i=i+1;
			 }
			
		 }
		
		
			
	}
	return 0;
}
