
int main()
{
   char str[256],a[256],b[256],tmp[256];
   int i,lenstr,lena;
   char *pstr;
   gets(str);
   gets(a);
   gets(b);
   lenstr=strlen(str);
   lena=strlen(a);

   for(i=0;i<=lenstr-lena;i++)
   {
      pstr=&str[i];
      strncpy(tmp,pstr,lena);
      tmp[lena]='\0';
      
      if(strcmp(tmp,a)==0)
      {
         str[i]='@';
         break;
      }
   }

   for(i=0;i<lenstr;i++)
   {
      if(str[i]=='@')
      {
        printf("%s",b);
        i=i+lena-1;
      }
      else printf("%c",str[i]);
   }
   printf("\n");

  return 0;
}


