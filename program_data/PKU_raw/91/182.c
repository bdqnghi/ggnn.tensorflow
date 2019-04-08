main()
{ char str[100];
  gets(str);
  char *p,*p0,*q,*q0;
  int k,i;
  k=strlen(str);
  p=(char *)calloc(100,sizeof(char)); 
  q=(char *)calloc(100,sizeof(char));
  p=str;
  for(i=0;i<k-1;i++)
   {*(q+i)=*(p+i+1)+*(p+i);}
  *(q+k-1)=*p+*(p+k-1);
  for(i=0;i<k;i++)
   printf("%c",*(q+i));
}
  
  