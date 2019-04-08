void main()
{
  int l,r=0;
  char *p,*q,a[100],b[100];
  scanf("%s %s",a,b);
  if(strlen(a)!=strlen(b)) printf("NO");
  else
  {
    l=strlen(a);
    for(p=a;p<a+l;p++)
    {
      for(q=b;q<b+l;q++)
      {
        if(*p==*q)
        {
          r++;
          *q=0;
          break;
        }
      }
    }
    if(r==l) printf("YES");
    else printf("NO");
  }
}