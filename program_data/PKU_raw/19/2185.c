int check(char *p,char a[],int l)
{
   int i;
   for(i=0;i<l;i++)
        if(*(p+i)!=a[i])
           return 0;
   return 1;        
}
main()
{
   char s[200],r[200],a[101],b[101];
   int i=0,j,ls,la,lb,count=0,p=1;
   gets(s);
   gets(a);
   gets(b);
     ls=strlen(s);
     la=strlen(a);
     lb=strlen(b);
     if(a[0]==s[0])
              if(check(&s[0],a,la)==1&&s[i+la]==' ')
                  {
                  for(j=0;j<lb;j++)
                      {
                      r[count]=b[j];
                      count++;
                      }
                    p=i+la;  
                   
                   }   
              else
                  {
                  r[count]=s[0];
                  count++;
              
                  }  
         else
              {
              r[count]=s[0];
              count++;
              } 
     for(i=p;i<ls;i++) 
     {
         if(a[0]==s[i])
              if(check(&s[i],a,la)==1&&(s[i-1]==' '&&(s[i+la]==' '||s[i+la]=='\0')))
                  {
                  for(j=0;j<lb;j++)
                      {
                      r[count]=b[j];
                      count++;
                      }
                    i=i+la-1;  
                   continue;
                   }   
              else
                  {
                  r[count]=s[i];
                  count++;
                  continue;
                  }  
         else
              {
              r[count]=s[i];
              count++;
              } 
         }                 
    r[count]='\0';
    printf("%s",r);
   
}
