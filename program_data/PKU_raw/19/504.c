int main()
{
   int len,n,w,i,wordnum=0,charnum=0;
   char word[50][20]={0};
   char s[1000]={0},o[20]={0},a[20]={0};
   gets(s);
   gets(o);
   gets(a);
   len=strlen(s);
   for(i=0;i<len;i++)
   {
	   if(s[i]!=' ')
	   {
		   word[wordnum][charnum]=s[i];
	       charnum++;
	   }
       if(s[i]==' ')
	   {
	       wordnum++;
		   charnum=0;
	   }
   }
   w=wordnum;
  for(wordnum=0;wordnum<=w;wordnum++)
  {
     if(strcmp(o,word[wordnum])==0)
	 {
		 strcpy(word[wordnum],a);
	 }
	 
  }
  printf("%s",word[0]);
  for(wordnum=1;wordnum<=w;wordnum++)
	  printf(" %s",word[wordnum]);
	return 0;
}
