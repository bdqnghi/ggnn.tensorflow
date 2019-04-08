int max(int x,int y)
{
    if(x>y) return x;
    else return y;
}
int dao[26],n;
int fly(int high,int m)
{
    if(m==n)         return 0;
    else
    {
    if(high<dao[m])  return fly(high,m+1);
    else
    {
        return max(fly(high,m+1),fly(dao[m],m+1)+1);
    }
    }    
}
int main()
{
   int i,j,k;
   scanf("%d",&n);
   for(i=0;i<n;i++)  scanf("%d",&dao[i]);
   k=fly(99999,0);
   printf("%d",k);
  }