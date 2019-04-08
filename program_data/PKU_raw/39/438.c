int main()
{
  struct stu
  {
    char name[20];
    int a;
    int b;
    char c[1];
    char d[1];
    int e;
    int m;
  }s[100];
  int n,i,max=0,t,sum=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  scanf("%s %d %d %s %s %d\n",s[i].name,&s[i].a,&s[i].b,s[i].c,s[i].d,&s[i].e);
  for(i=0;i<n;i++)
  s[i].m=0;
  for(i=0;i<n;i++)
  {
    if(((s[i].a)>80)&&((s[i].e)>0))
    s[i].m+=8000;
    if(((s[i].a)>85)&&((s[i].b)>80))
    s[i].m+=4000;
    if((s[i].a)>90)
    s[i].m+=2000;
    if(((s[i].a)>85)&&((s[i].d[0])=='A'+24))
    s[i].m+=1000;
    if(((s[i].b)>80)&&((s[i].c[0])=='A'+24))
    s[i].m+=850;
  }
  for(i=0;i<n;i++)
  {
   if(s[i].m>max)
    {
      max=s[i].m;
      t=i;
    }
  }
  for(i=0;i<n;i++)
  sum+=s[i].m;
  printf("%s\n",s[t].name);
  printf("%d\n",max);
  printf("%d\n",sum);
  return 0;
}
