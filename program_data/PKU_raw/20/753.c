int main()
{
  char str[100][11],substr[100][4];
  int k,i=0,j,m;
  while(scanf("%s%s",str[i],substr[i])!=EOF)
  {
    k=0;
    m=str[i][0];
    for(j=1;str[i][j];j++)
      if(str[i][j]>m)
      {m=str[i][j];
       k=j;}
    for(j=0;j<=k;j++)
     printf("%c",str[i][j]);
    printf("%s",substr[i]);
    for(;str[i][j];j++)
     printf("%c",str[i][j]);
    printf("\n");
    i++;
  }
}

