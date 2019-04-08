void main()
{
  int i;
   char str1[400],str2[400];
   gets(str1);
   gets(str2);
   
   for(i=0;(str1[i]==str2[i]||(str1[i]==str2[i]+32)||(str1[i]==str2[i]-32))&&str1[i]!='\0'&&str2[i]!='\0';i++)
	  ;
   str1[i]=(str1[i]>='A'&&str1[i]<='Z')?(str1[i]+32):str1[i];
        str2[i]=(str2[i]>='A'&&str2[i]<='Z')?(str2[i]+32):str2[i];
	   
   
   if(str1[i]>str2[i])   printf(">");
   else if(str1[i]<str2[i])   printf("<");
   else if(str1[i]==str2[i]) printf("=");
   
}


