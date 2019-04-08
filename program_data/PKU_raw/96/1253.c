
main()
{
      int a;
      char b[200];
      int c;
      int h,m;
      char s[200];
      gets(s);
      int l=strlen(s);
      int i,j,k;
      if(l==2)
      {
              c=(s[0]-'0')*10+s[1]-'0';
              h=c/13;
              m=c%13;
              printf("%d\n%d\n",h,m);
      }
      else if(l==1)
      {
           c=s[0]-'0';
           printf("0\n%d",c);
      }
      else if(l>2)
      {
           if((s[0]-'0')*10+s[1]-'0'>=13)
           {
           
          c=s[0]-'0';
           for(i=0;i<l-1;i++)
           {
                           
                            a=c*10+s[i+1]-'0';
                           b[i]=a/13+'0';
                           c=a%13;
                           
                           
           }
                 b[i]='\0';
                 printf("%s\n%d\n",b,c);
           }
           else if((s[0]-'0')*10+s[1]-'0'<13)
           {
                c=(s[0]-'0')*10+(s[1]-'0');
                for(i=0;i<l-2;i++)
                {
                                a=c*10+s[i+2]-'0';
                                b[i]=a/13+'0';
                                
                                c=a%13;
                }
                 b[i]='\0';
                printf("%s\n%d\n",b,c);
           }
      }
      }
