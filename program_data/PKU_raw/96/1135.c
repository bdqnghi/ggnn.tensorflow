main()
{
      char a[100],b[100];
      int c,len,d,e,f[100];
     scanf("%s",a);
     len=strlen(a);
     if (len==1)
     {printf("0\n");printf("%d",a[0]-'0');}
     else
{if (len==2 && ((a[0]-'0')*10+a[1]-'0')<13)
     {printf("0\n");printf("%d",((a[0]-'0')*10+a[1]-'0'));}
     else
{
     for(c=0;c<=len-1;c++)
     {
     f[c]=a[c]-'0';
     }
     for(c=0;c<=len-2;c++)
     { 
       d=f[c]/13;
       b[c]=d+'0';
       e=f[c]%13;
       f[c+1]=f[c+1]+e*10;
     }
      d=f[len-1]/13;
       b[len-1]=d+'0';
       e=f[len-1]%13;
      if (b[0]!='0')
       printf("%s\n",b);
      else 
          {if (b[1]!='0')
        { for(c=0;c<=len-1;c++)
         {
         b[c]=b[c+1];
         }
         b[len-1]=0;
        printf("%s\n",b);
        } 
        else 
        { for(c=0;c<=len-2;c++)
         {
         b[c]=b[c+2];
         }
         b[len-1]=0;
         b[len-2]=0;
        printf("%s\n",b);
        } 
        printf("%d",e);}
        
}
}
     
      }
