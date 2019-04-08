int find(int *x,int y,int z)
{
 int count=0;
 for(int i=0;i<y;i++)
 {if(x[i]==z) count++;}
 return count;
}

int count(int *x,int y)
{
  int count1=0;
  for(int i=0;i<y;i++)
  {count1+=find(x,y,2*x[i]);} 
  return count1;
}

int main()
{
 int temp[16];
 int len=0;
 scanf("%d",&temp[len]);
 while(temp[len]!=-1)
 {
  while(temp[len]!=0)
  {len++;
  scanf("%d",&temp[len]);
    }
  printf("%d\n",count(temp,len));
  scanf("%d",&temp[0]);
  len=0;
 }
 return 0;
}
