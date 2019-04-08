int main()
{
   int i,len,j,m=0,max;
   char ch[105],s[105],str[105];
   while(scanf("%s",ch)!=EOF)
   {
   	int m=0;
   strcpy(s,ch);
   strcpy(str,ch);
   len=strlen(ch);

   for(i=0;i<len;i++)                                                                                                                                 
   {
      if(ch[i]!='('&&ch[i]!=')')
      {s[i]=' ';}
      else if(ch[i]==')')//you  shi
      {
         for(j=i-1;j>=0;j--)
         {  
            if(ch[j]=='(')
            {m=1;
            ch[i]=' ';
            s[i]=' ';
            s[j]=' ';
            ch[j]=' ';
            break;
            }
            else
            {continue;}
         }
        if(m==0)
         {s[i]='?';} //zai
      }//you  zhi	
   }
   for(i=0;i<len;i++)
   {
      if(s[i]=='(')
      {s[i]='$';}
      else if(s[i]==')')
      {s[i]='?';}	
   }
   printf("%s\n",str);
   printf("%s\n",s);
   }
return 0;  
}