void change(char p[99])
{
   int i,j;
   for(i=0;p[i]!='\0';i++)
    { if(p[i]>='A'&&p[i]<='Z')
       p[i]=p[i]-'A'+'a';
    }
}
main()
{
   char p1[99],p2[99];
   gets(p1);gets(p2);
   change(p1);
   change(p2);
   int h=strcmp(p1,p2);
   if(h<0) printf("<");
   else if(h==0) printf("=");
   else if(h>0) printf(">");
  
}
