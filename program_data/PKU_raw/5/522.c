int main()
{
  int sum=0,len1,len2,i,n,p=0;
  double x,y;
  char a1[501],a2[501];
  scanf("%lf",&x);
  scanf("%s %s",a1,a2);
  len1=strlen(a1);
  len2=strlen(a2);
  if(len1!=len2)
  {
    p=1;
  }
  else
  {
    for(i=0;i<len1;i++)
    {
      if((a1[i]!='A'&&a1[i]!='T'&&a1[i]!='C'&&a1[i]!='G')||
         (a2[i]!='A'&&a2[i]!='T'&&a2[i]!='C'&&a2[i]!='G'))
      {
          p=1;
      }
    }
  }
  if(p!=0)
  {
    printf("error");
  }
  else
  {
    for(i=0;i<len1;i++)
    {
      if(a1[i]==a2[i])
      sum++;
    }
    y=1.0*sum/len1;
    if(y<=x)
    {
      printf("no");
    }
    else
    {
      printf("yes");
    }
  }
  return 0;
}
