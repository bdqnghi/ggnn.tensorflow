
int main(int argc, char* argv[])
{
    int n,m,i,j;
	char str[101],str1[101];
	scanf("%d\n",&n);
	for(m=0;m<n;m++)
	{
      gets(str);
	  puts(str);
	  for(i=0;i<strlen(str);i++)
	  {
	    if(str[i]==')')
		for(j=i;j>=0;j--)   
		   if(str[j]=='(') 
		   {
			   str[j]='0';
			   str[i]='0';
			   break;
		   }
	  }

      printf("\n");
	  for(i=0;i<strlen(str);i++)
	  {
	   if(str[i]=='(')  printf("$");
	   if(str[i]==')')  printf("?");
	   if(str[i]!='('&&str[i]!=')')  printf(" ");
	  }
	  printf("\n");
	}
	return 0;
}

