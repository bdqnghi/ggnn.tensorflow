main()
{
  int n,m=0,x=0,y=0,q,s;
  scanf("%d",&n);
  struct person
  {
    char sex[7];
    float height;
  };
  struct person people[n];
 
  for(int i=0;i<=n-1;i++)
    scanf("%s %f",people[i].sex,&people[i].height);
  for(int j=0;j<=n-1;j++)
  {
    if(people[j].sex[0]=='m')
    m++;
  }
  struct person male[m];
  struct person female[n-m];
  struct person b;
  for(int k=0;k<=n-1;k++)
  {
    if(people[k].sex[0]=='m')
    {
      male[x]=people[k];
      x++;
    }
    else
    {
      female[y]=people[k];
      y++;
    }
  }
  for(int p=0;p<=m-2;p++)
  {
     for(q=0;q<=m-2-p;q++)
     {
       if(male[q+1].height<male[q].height)
       {
         b=male[q+1];
         male[q+1]=male[q];
         male[q]=b;
       }
     }
  }
  for(int r=0;r<=y-2;r++)
  {
     for(s=0;s<=y-2-r;s++)
     {
       if(female[s+1].height>female[s].height)
       {
         b=female[s+1];
         female[s+1]=female[s];
         female[s]=b;
       }
     }
  }
  for(int t=0;t<=m-1;t++)
  {
    printf("%.2f ",male[t].height);
  }
  for(int u=0;u<=y-2;u++)
  {
    printf("%.2f ",female[u].height);
  }
  printf("%.2f",female[y-1].height);        
}
