void main()
{ char *p,*q;
  int i,c=0;
  p=(char *)malloc(101*sizeof(char));
  q=(char *)malloc(101*sizeof(char));
  for(i=0;;i++)
  {scanf("%c",p+i);c++;
   if(*(p+i)=='\n')break;}
  for(i=0;i<c-2;i++)
	  *(q+i)=*(p+i)+*(p+i+1);
  *(q+i)=*(p+i)+*p;
  for(i=0;i<c-1;i++)
  printf("%c",*(q+i));
}







