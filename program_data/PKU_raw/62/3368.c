void main ()
{ int a,n,i,k,leap=1;
  char s[200];
  gets(s);
  a=strlen(s);
  for(i=0;i<a;i++)
  { 
	  if(s[i]!=' ')
	  {leap=1;
		  printf("%c",s[i]);
	  }
	  if(s[i]==' '&&leap==1)
	  { printf(" ");
	   leap=0;
	  }
  }

}