void main()
{
  char *p;
  int i;
  p=malloc(31*sizeof(char));
  gets(p);
  for(i=0;i<31;i++)
  {
    if(*(p+i)=='\0')break;
    else if(*(p+i)>47&&*(p+i)<58)printf("%c",*(p+i));
    if(*(p+i+1)<48||*(p+i+1)>57)printf("\n");
  }
}