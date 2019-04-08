main()
{
   char a[101],b[101];
   int st[100],sp;
   int i,l,m,n,t; 
   while(1)
   {  
      for(i=0;i<=99;i++)  
      st[i]=0;
      sp=0;
      scanf("%s",a);
      if(a[0]=='\0')
      break;
      strcpy(b,a);
      l=strlen(a);
      for(i=0;i<=l-1;i++)
      {
         if(a[i]=='(')
         {
         st[sp]=i;
         break;
         }
      }
      if(i==l);
      else
      {
         for(sp=1,i=st[0]+1;i<=l-1;i++)
         {
            if(a[i]=='(')
            st[sp++]=i;
            else if(a[i]==')')
            {  
               if(sp>0)
               {
                  b[st[--sp]]=' ';
                  b[i]=' ';
               }
            }                 
         }
      }
      for(i=0;i<=l-1;i++)
      {
         if(b[i]=='(')
         b[i]='$';
         else if(b[i]==')')
         b[i]='?';
         else if(b[i]==' ');
         else
         b[i]=' ';
      }   
      printf("%s\n",a);
      n=l-1;
      for(i=l-1;i>=0;i--)
      {
            if(b[i]==' ')
            n=i-1;
            else
            break;
      }
      m=0;
      for(i=0;i<=l-1;i++)
      {
         if(b[i]==' ')
         m=i+1;
         else
         break;                   
      }
      t=0;
      for(i=m;i<=n;i++)
      {
         printf("%c",b[i]);
         t++;
      }
      printf("\n");
      a[0]='\0';
   }                
}