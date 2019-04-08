main()
{ int n,i;
  char *p,*q;
  p=(char *)malloc(100*sizeof(char));
  q=(char *)malloc(100*sizeof(char));
  gets(p);
  n=strlen(p);
  for(i=0;i<n;i++)
  {
   if(i<n-1)
   { *(q+i)=*(p+i)+*(p+i+1);
   }
   else
   { *(q+i)=*(p+i)+*(p+0); }
  }
  for(i=0;i<n;i++)
  {  printf("%c",*(q+i));}
}