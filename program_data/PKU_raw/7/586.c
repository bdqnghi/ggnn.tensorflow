int main()
{
  char a[256],b[256],c[256],d[256],e[256];
  int i,j,p;
  gets(a);
  gets(b);
  gets(c);
  for(i=0;i<=strlen(a)-strlen(b);i++)
  {
     p=0;
     
     for(j=i;j<i+strlen(b);j++)
       if(b[j-i]==a[j])
        p++;
        
     if(p==strlen(b))
     {
       d[i]='\0';
       break;
     }
     d[i]=a[i];                       
  }
  if(i==strlen(a)-strlen(b)+1)
  puts(a);
  else
  {
  strcat(d,c);

  for(j=i+strlen(b);j<strlen(a);j++)
  e[j-i-strlen(b)]=a[j];
  e[j-i-strlen(b)]='\0';
  strcat(d,e);
  printf("%s",d);
}
    return 0;    
}