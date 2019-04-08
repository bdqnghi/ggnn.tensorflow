
main()
{
  struct book
  {
    int num;
    char name[26];
  }b[1000];
  
  int m,i,j,n[26]={0},max=0,t;
  scanf("%d",&m);
  for(i=0;i<m;i++)
  {  scanf("%d %s",&b[i].num,b[i].name);
  }
  for(i=0;i<m;i++)
  {  
     for(j=0;j<strlen(b[i].name);j++)
     { ++n[b[i].name[j]-65];
     }
  }
  for(i=0;i<26;i++)
  {
    if(n[i]>max)
    { max=n[i];
      t=i+65;
     }
  }
  printf("%c\n",t);
  printf("%d\n",max);
  for(i=0;i<m;i++)
  {
    for(j=0;j<strlen(b[i].name);j++)
    {  if(b[i].name[j]==t)
       printf("%d\n",b[i].num);
    }
  }
}
