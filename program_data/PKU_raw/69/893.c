
main()
{
      char str1[251],str2[251],str[289];
      int i,m,n,z,x,t,l=0;
      for(i=0;i<=251;i++)
      str[i]='\0';
      gets(str1);
      gets(str2);
      m=strlen(str1);
      n=strlen(str2);
      z=0;

      if (m<n) 
      {
               for (i=n-1;i>=n-m;i--)
               {
               x=str1[i-n+m]+str2[i]-'0'-'0'+z;
               if (x<10) str[i+1]=x+'0',z=0;
               else str[i+1]=x-10+'0',z=1;
               }
               for (i=n-m-1;i>=0;i--)
               {
                    x=str2[i]+z-'0';
                    if(x<10) str[i+1]=x+'0',z=0;
                    else str[i+1]=x-10+'0',z=1;               
               }
               if(z==1) str[0]='1';
               else str[0]='0';
               }
      else if (m>=n) 
      {
               for (i=m-1;i>=m-n;i--)
               {
               x=str2[i-m+n]+str1[i]-'0'-'0'+z;
               if (x<10) str[i+1]=x+'0',z=0;
               else str[i+1]=x-10+'0',z=1;
               }
               for (i=m-n-1;i>=0;i--)
               {
                    x=str1[i]+z-'0';
                    if(x<10) str[i+1]=x+'0',z=0;
                    else str[i+1]=x-10+'0',z=1;               
               }
               if(z==1) str[0]='1';
               else str[0]='0';
               }

      t=strlen(str);
      for (i=0;i<=t-1;i++)
      {
           if(str[i]!='0') break;
           else l++;
           }
      if (l!=0&&l!=t)
      {
      for(i=0;i<=t;i++) str[i]=str[i+l];
      }
      else if(l==t) str[0]='0',str[1]='\0';
      printf("%s",str);

}
        
        