int main(int argc, char* argv[])
{
    int n,i,j,isbreak;
	char s[21];
	scanf ("%d",&n);
	for (j=0;j<n;j++)
	{
		isbreak=0;
		scanf ("%s",s);
	    if (s[0]=='_'||(s[0]<='Z'&&s[0]>='A')||(s[0]<='z'&&s[0]>='a'))
			{  
			   for (i=1;s[i]!='\0';i++)
			   {
				   if (s[i]=='_'||(s[i]<='Z'&&s[i]>='A')||(s[i]<='z'&&s[i]>='a')||(s[i]<='9'&&s[i]>='0'))
                       continue;
				   else 
				   {
					   isbreak=1;
					   printf ("no\n");
					   break;
				   }
			   }
		}  
	     else 
				 {
					printf("no\n");
					isbreak=1;
				  }
			   
		 if (isbreak==1)
			 continue;
		 else if (isbreak==0)
		 {
			 printf ("yes\n");
		     continue;
		 }
		 }
        return 0;
}
