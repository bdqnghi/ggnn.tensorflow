main()
{
  struct point
  {
    int hen,shu,shumu;
  }s[81];
  int a,b,i,j,k,m[4][81]={0};
  scanf("%d %d",&a,&b);
  for(i=0;i<=8;i++)
    for(j=0;j<=8;j++)
    {
      s[9*i+j].hen=i;
      s[9*i+j].shu=j;
      s[9*i+j].shumu=0;
    }
  s[40].shumu=a;
  for(i=0;i<=b-1;i++)
   {
    for(j=0;j<=80;j++)
      if(s[j].shumu!=0)
        for(k=0;k<=80;k++)
           if((s[k].hen==s[j].hen-1||s[k].hen==s[j].hen+1||s[k].hen==s[j].hen)&&(s[k].shu==s[j].shu+1||s[k].shu==s[j].shu-1||s[k].shu==s[j].shu))
              m[i][k]=m[i][k]+s[j].shumu;
    for(k=0;k<=80;k++)
      s[k].shumu=s[k].shumu+m[i][k];
   }
  for(i=0;i<=8;i++)
    for(j=0;j<=8;j++)
    {
      if(j==8)
        printf("%d\n",s[9*i+j].shumu);
      else
        printf("%d ",s[9*i+j].shumu);
    }
}