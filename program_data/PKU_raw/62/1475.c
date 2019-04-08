void main()
{
  char *p,*q[100];
  int i,j,n;
  p=malloc(100*sizeof(char));
  gets(p);
  for(i=1,q[0]=p;i<100;i++)
  {
    q[i]=q[i-1]+1;
    if(*q[i]==' ')
    {
    for(j=1;*(q[i]+j)==' ';j++)1;
    q[i]=q[i]+j-1;
    }
    if(*(q[i]+1)=='\0'){n=i;break;}
  }
  for(i=0;i<=n;i++)printf("%c",*q[i]);
}