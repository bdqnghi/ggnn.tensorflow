int main()
{
   int i,j,k,l,sign;
   char s[501],c[501];
   scanf("%s",s);
   l=strlen(s);
   for(j=2;j<=l;j++)
   {
      for(i=0;i<=l-j;i++,k=0)
	  {
	     for(k=0,sign=0;k<j;k++)
		 {
		    c[k]=s[i+k];
			if(s[i+k]==s[i+j-1-k])
			{
			   sign++;
			}
		 }
		 if(sign==j)
		 {
		   for(k=0;k<j;k++)
		   {
			   printf("%c",c[k]);
		   }
		   printf("\n");
		 }

	  }
   }
   return 0;
}