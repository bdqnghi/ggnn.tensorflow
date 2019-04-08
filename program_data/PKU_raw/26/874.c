int main()
{ 
  char *p,c[101];
  gets(c);
  p=c;
  while(*p!='\0')
  { 
    if(*p>32) cout<<*p;
    else
    { 
      cout<<' ';
      do{p++;}while(*p<33);
      cout<<*p;
    }
    p++;
  }   
  return 0;
}
