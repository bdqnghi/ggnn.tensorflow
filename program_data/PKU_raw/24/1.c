main()
{
   char c,str[1000],word[20];
   char longword[20],shortword[20];
   int i,j, longlen=0,shortlen=20;
   gets(str);
   i=0;
   j=0;
   while((c=str[i])!='\0')
     if(c!=' ')
       word[j++]=str[i++];
     else
     {
        i++;
        word[j]='\0';
        if(j>longlen)
         {  longlen=j;strcpy(longword,word);}
        if(j<shortlen)
         {  shortlen=j;strcpy(shortword,word);}
        j=0;
      }
	 word[j]=0;
	 if(j>longlen)
         {  longlen=j;strcpy(longword,word);}
        else if(j<shortlen)
         {  shortlen=j;strcpy(shortword,word);}
    puts(longword);
    puts(shortword);
}