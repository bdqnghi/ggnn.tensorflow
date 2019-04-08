
int main()
{
  int i,a,b,c,as,bs,cs;
  for(a=1;a<4;a++)
  for(b=1;b<4;b++)
  for(c=1;c<4;c++)
  {
      as=(b>a)+(c==a);
      bs=(a>b)+(a>c);
      cs=(c>b)+(b>a);
      if(!((a<=b) && (as<=bs) || (a<=c) && (as<=cs)||
          (b<=a) && (bs<=as) || (b<=c) && (bs<=cs)||
          (c<=a) && (cs<=as) || (c<=b) && (cs<=bs)) )
      for(i=1;i<4;i++)
      {
          if(a==i) printf("A");
          if(b==i) printf("B");
          if(c==i) printf("C");
      }
  }
  return 0;
}