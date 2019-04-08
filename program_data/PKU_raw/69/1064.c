int max(int a,int b)
   { 
      if(a>=b)
        return a;
      else
        return b;
    }    
main()
{
      char s1[250],s2[250],s3[250],t;
      scanf("%s",s1);
      scanf("%s",s2);
      int a,b,c,d,i;
      a=strlen(s1);
      b=strlen(s2);
      int f=max(a,b);
      for(i=0;i<=(int)(a-1)/2;i++)
            {
              t=s1[i];
              s1[i]=s1[a-1-i];
              s1[a-1-i]=t; 
            } 
      for(i=0;i<=(int)(b-1)/2;i++)
            {
              t=s2[i];
              s2[i]=s2[b-1-i];
              s2[b-1-i]=t; 
            }
      if (a>=b)
        {  
          for(i=b;i<=a;i++)
              s2[i]='0';
          s1[a]='0';
        }  
      else
        {    
          for(i=a;i<=b;i++)
              s1[i]='0';
          s2[b]='0';    
        } 
      for(i=0;i<=f;i++)
        {
          c=(s1[i]-'0')+(s2[i]-'0');
          if (c>=10)
             {  
               d=c%10;
               s3[i]=d+'0';
               s1[i+1]=s1[i+1]-'0'+1+'0';
             } 
          else 
             s3[i]=c+'0';
        } 
      for(i=0;i<=(int)f/2;i++)
        {
          t=s3[i];
          s3[i]=s3[f-i];
          s3[f-i]=t; 
        }
      for (i=0;i<=f;i++)
          if (s3[i]-'0'!=0||i==f)
             for(i;i<=f;i++)       
                 printf ("%c",s3[i]);
} 