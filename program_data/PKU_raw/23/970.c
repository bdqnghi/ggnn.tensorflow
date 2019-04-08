void main()
{
  char a[100]={'\0'};
  int i,j,n,k,m;
  gets(a);
  for(i=0;i<100;i++)if(a[i]=='\0'){n=i-1;break;}
  for(i=n,j=n;i>=0;i--)
  {
    if(a[i]==' '&&a[i+1]!=' ')
    {
      for(k=i+1;k<j+1;k++)printf("%c",a[k]);
      printf(" ");
      m=i;
      for(;1;i--)if(a[i]!=' '){j=i;break;}
      i=m;
     }
    else if(i==0&&a[0]!=' ')for(k=i;k<=j;k++)printf("%c",a[k]);
  }
}
