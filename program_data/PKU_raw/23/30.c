
main()
{
  char *p,s[200],l,i;
  p=s;
  gets(p);
  l=strlen(p);
  for(i=l+1;i>=0;i--)
  { 
	  if(*(p+i)==' ')
	  {printf("%s ",p+i+1);
	  *(p+i)='\0';}
  
  }
  printf("%s",p);

}