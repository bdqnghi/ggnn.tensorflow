main()
{
  char *p,*q;  int n,i;
  p=(char*)malloc(100*sizeof(char));
  q=(char*)malloc(100*sizeof(char));
  gets(p);
  n=strlen(p);
  for(i=0;i<n;i++)
  {
    if(i==n-1)*(q+n-1)=*(p+n-1)+*(p+0);
    else *(q+i)=*(p+i)+*(p+i+1);
  }
  for(i=0;i<n;i++)printf("%c",*(q+i));
}
