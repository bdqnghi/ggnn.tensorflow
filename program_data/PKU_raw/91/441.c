
int main()
{
  char a[120]={'\0'} ;
  char b[120]={'\0'} ;
  char *p=0;
  int i,len;
  gets(a);
  len=strlen(a);
  for(p=a,i=0;p<a+len-1;i++,p++){b[i]=*p+*(p+1);}
  p=a;
  b[len-1]=*(p+len-1)+*p;
  puts(b);  	
  return 0;
}
