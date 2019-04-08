
int chs(int *p0,int num,int *ptr,int skip);

int main()
{
  int n=0,m=0;
  int ppl[1000],king;
  int i;
  scanf("%d%d",&n,&m);
  while(n!=0&&m!=0)
  {
    for(i=0;i<n;i++)
    {
      ppl[i]=i+1;
    }
    for(i=n;i<1000;i++)
    {
      ppl[i]=0;
    }
    king=chs(ppl,n,ppl,m);
    printf("%d\n",king);
    scanf("%d%d",&n,&m);
  }
  return 0;
}

int chs(int *p0,int num,int *pchs,int skip)
{
  int *i=NULL;
  
  //????
  pchs=pchs+skip-1;
  while(pchs-p0>=num)
  {
    pchs=pchs-num;
  }
  
  //????
  if(num==1)
  {
    return *pchs;
  }
  //????
  else
  {
    //??
    if(pchs-p0==num-1)
    {
      return chs(p0,num-1,p0,skip);
    }
    //???
    else
    {
      for(i=pchs;i-p0<num-1;i++)
      {
        *i=*(i+1);
      }
      return chs(p0,num-1,pchs,skip);
    }
  }
}
