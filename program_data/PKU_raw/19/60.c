int main()
{
  char s[100],a[100],b[100];
  gets(s);
  gets(a);
  gets(b);
  char x[100][100];
  int i,t=1,j=1,y,z,q,p,m;
  for(q=0;q<=99;q++)
  {
    for(p=0;p<=99;p++)
       {
          x[q][p]='\0';
     }
   }
  for(i=0;i<=99;i++)
  {
     if(s[i]==' ')break;
     else
     x[0][i]=s[i];
  }
   do
    {
       if(s[t]==' ')
        {
           z=t;
          for(y=0;y<=99;y++)
            {
               z++;
                if(s[z]!=' '&&s[z]!='\0')
                x[j][y]=s[z];
               else
                break; 
            }
             j++;
         }
        t++;
     }
   while(t<=99);
   for(i=0;i<=99;i++)
    {
      if(strcmp(x[i],a)==0)
      strcpy(x[i],b);
    }
     for(m=0;m<=99;m++)
       {
          if(x[m][0]=='\0')break;
     }
  for(i=0;i<=m-1;i++)
    {
       if(i==0)
       printf("%s",x[i]);
       else
       printf(" %s",x[i]);
    }
return 0;
}
      
  