void main()
{
   char a[80],b[80];
   int i,len1,len2,t;
   gets(a);
   gets(b);
   len1=strlen(a);
   len2=strlen(b);
   for(i=0;i<len1;i++)
   {
      if(a[i]<='Z'&&a[i]>='A')a[i]=a[i]+32;
   }
   for(i=0;i<len2;i++)
   {
      if(b[i]<='Z'&&b[i]>='A')b[i]=b[i]+32;
   }
   t=strcmp(a,b);
   if(t>0)
   {
	   printf(">\n");
   }
   else
   {
	  if(t==0)printf("=\n");
	  else printf("<\n");
   }
}