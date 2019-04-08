int main(int argc, char *argv[])
{
  char s1[50],s2[50],*p1,*p2;
  int i=0,j,lens1,lens2,n,x=0,y=0;
  scanf("%s",s1);
  scanf("%s",s2);
  p1=s1;p2=s2;
  lens1=strlen(s1);
  lens2=strlen(s2);
  n=lens2-lens1+1;
  for (i=0;i<n;i++)
  {
      p2=s2;
      p2+=i;
      x=0;
      for (p1=s1;*p1!='\0'&&*p2!='\0';p1++,p2++)
      {
          if (*p1==*p2) x+=1;
          else x+=0;
      }
      if (x==lens1) {y=i;break;}
  }
  printf("%d",y);

  return 0;
}
