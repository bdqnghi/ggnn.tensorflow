main()
{
      int n,i,len1,len2;
      char str1[255],str2[255],str3[255];
      char c='0';
      scanf("%s %s",str1,str2);
      char temp[255];
      if(strlen(str1)<strlen(str2)) { strcpy(temp,str1);strcpy(str1,str2);strcpy(str2,temp);}
      len1=strlen(str1);
      len2=strlen(str2);
      str3[len1]='\0';
      int jinwei=0;
      for(i=len1-1;i>=0;i--)
      {
         if(i>=len1-len2)
         {
            if(str1[i]+str2[i-len1+len2]-'0'-'0'+jinwei<10)
            {
               str3[i]=str1[i]+str2[i-len1+len2]-'0'+jinwei;
               jinwei=0;
            }
            else
            {
                str3[i]=str1[i]+str2[i-len1+len2]-'0'+jinwei-10;
               jinwei=1;
            }
         }
         else
         {
             if(str1[i]-'0'+jinwei<10)
               { str3[i]=str1[i]+jinwei; jinwei=0;}
             else
             {  str3[i]=str1[i]+jinwei-10; jinwei=1;}
         }
      }
      int y=0;
      if(jinwei==1) {c='1';printf("%c%s",c,str3);}
      else
      {
          if(len1==1&&len2==1)
           { printf("%c",str3[0]);}
      else{
      for(i=0;i<len1;i++)
      {
         if(y==1)
           printf("%c",str3[i]);
         else
         {
         if(str3[i]>'0')
            {y=1; printf("%c",str3[i]);}
         }
      }
      }
      }
      
      return 0;
}
