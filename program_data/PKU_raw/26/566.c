int main()
{
   char *p,str[110];
   int len,i;
   p=str;
   gets(str);
   len=strlen(str);
   for(i=0;i<len;i++)
   {
     if(i==0)
	    cout<<*(p+i);
	 else 
	 {
		 if((*(p+i)==' ' && *(p+i-1)!=' ') || (*(p+i)!=' '))
		 cout<<*(p+i);
		 else continue;
	 }
   }
   return 0;
}