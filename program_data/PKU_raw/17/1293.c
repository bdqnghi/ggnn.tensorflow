main()
{
      int i,j,k,len=0;
      char a[1000];
      char b[1000];
      while(gets(a)!=NULL)
      {
           len=strlen(a);
           for(i=0;i<len;i++) 
           {
                b[i]='c';                
           } 
           b[i]='\0';
           for(i=len-1;i>=0;i--)
           {
                if(a[i]!='('&&a[i]!=')')
                b[i]=' ';
                else if(a[i]==')'&&b[i]!=' ') 
                b[i]='?'; 
                else if(a[i]=='(')
                {
                     if(i==len-1)
                     b[i]='$';
                     else
                    {
                          for(j=i+1;j<len;j++)
                          {
                               if(a[j]==')'&&b[j]!=' ') 
                               {b[j]=' ';b[i]=' ';break;}              
                          }
                          if(j==len)
                           b[i]='$';
                    }
                }            
           }  
           //puts(a);
           //puts(b);
           for(i=0;a[i]!='\0';i++)
           {printf("%c",a[i]);}
           printf("\n");
            for(i=0;a[i]!='\0';i++)
            {printf("%c",b[i]);}  
            printf("\n");   
      }
      getchar();
      getchar();
}
