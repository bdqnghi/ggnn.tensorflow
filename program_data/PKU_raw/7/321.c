int main()
{
  char s[100],d[100];
  char *p,c[100],c1[100],c2[100];
  int i,k,ls,lc;
  gets(s);
  gets(c);
  gets(d);

  p=strstr(s,c);
  ls=strlen(s);
  lc=strlen(c);
  int lsc=p-s;
  if(p)
  {
	  for(i=0;i<lsc;i++){
		  c1[i]=s[i];
	  }
	  c1[i]='\0';
	  k=0;
	  for(i=i+lc;i<ls;i++,k++){
		  c2[k]=s[i];
	  }
	  c2[k]='\0';
	  printf("%s",c1);
	  printf("%s",d);
	  printf("%s",c2);
  }
  else
	  printf("%s",s);

  return 0;
}