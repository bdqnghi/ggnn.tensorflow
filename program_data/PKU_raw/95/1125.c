void main()

{
   char a[80],b[80];
   gets(a);
   printf("\n");
   gets(b);
   int i;
   for(i=0;i<80;i++)
   {
	   if('A'<=a[i]&&a[i]<='Z') a[i]=a[i]-'A'+'a';
	   if('A'<=b[i]&&b[i]<='Z') b[i]=b[i]-'A'+'a';
   }
   if(strcmp(a,b)>0) putchar('>');
	   if(strcmp(a,b)==0) putchar('=');
		   if(strcmp(a,b)<0) putchar('<');
    


		


}
