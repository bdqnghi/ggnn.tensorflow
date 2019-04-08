

int main()
{
   char s[40];
   gets(s);
   int i;
   for(i=0;i<strlen(s);i++)
   {
	   if(isdigit(*(s+i))!=0)
	   {
		   cout<<*(s+i);
	   }
	   else
	   {
		   if(isdigit(*(s+i-1))!=0)
		   cout<<endl;
	   }

   }

   return 0;
}