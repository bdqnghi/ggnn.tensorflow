int main()
{
  char a[80],b[80],c[80],d[80];
  int i,m,n;
  gets(a);
  gets(b);
  m=strlen(a);
  n=strlen(b);
  for(i=0;i<80;i++)
  {if(a[i]>=65&&a[i]<=90)
		  c[i]=a[i]+32;
	  else
		  c[i]=a[i];
 if(b[i]>=65&&b[i]<=90)
  d[i]=b[i]+32;
  else
	  d[i]=b[i];
  }
  if(strcmp(c,d)>0)
	  printf(">");
  if(strcmp(c,d)==0)
	  printf("=");
  if(strcmp(c,d)<0)
	  printf("<");
  return 0;
}