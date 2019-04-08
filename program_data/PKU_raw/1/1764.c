
int count(int x,int y)//????????? 
{
    if(x<y) return 0;//???? 
    if(x>=y) 
    {
      int sum=0;
      for(int j=y;j<x;j++)
      {
        if(x%j==0)
        sum=sum+count(x/j,j);//??? 
      }
      return sum+1;
    }
} 
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    cout<< count(a[i],2) <<endl; 
    return 0;
}
