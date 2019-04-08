
int main()
{
  int i,j,k,flag,v=0,x,y,xci;
  char str[500],hw[100][200];
  scanf("%s",str);
  int l=strlen(str);
  for(i=2;i<=l;i++)
  { 
    xci=i/2;
    for(j=0;j+i<=l+1;j++)
    {
      flag=1;
      for(k=0;k<xci;k++)
      {
        if(str[j+k]!=str[j+i-1-k]) flag=0;
      }
      if(flag==1) 
      {
        for(x=0;x<i;x++)
        hw[v][x]=str[j+x];
        hw[v][x]='\0';
        v++;
      }
    }
  }
  for(i=0;i<v;i++)//
  printf("%s\n",hw[i]);

  
}