int sum;
void zhongshu(int qian,int a);
int main()
{
    int n,i,j,a[100];
    cin>>n;
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++)
    {  sum=0;
       zhongshu(2,a[i]);
       cout<<sum<<endl;
       }
    return 0;
}
void zhongshu(int qian,int a)
{
   int i,j,c;
   if(a==1)
   {
   sum=sum+1;
   return;
  }
   for(i=qian;i<=a;i++)
   {
      if(a%i==0)
         zhongshu(i,a/i);
   }
}