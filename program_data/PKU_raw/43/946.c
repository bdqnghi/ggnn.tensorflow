int main()
{
  int odd[20001]={0};
  int num[10001]={0};
  int n,i,j,sum;
  cin>>n;
  for (i=2;i<=10000;i++)
    {
      if (odd[i]==0)
      {
        j=i;
        while (j<=10000)
          {
            j=j+i;
            odd[j]=1;    
          }                  
        }   
    }    
  sum=0;
  for (i=3;i<=10000;i++)
    if (odd[i]==0) 
      {
        sum=sum+1;
        num[sum]=i;           
      }
 
  for (i=1;i<=sum;i++)
    for (j=i;j<=sum;j++)
      if (num[i]+num[j]==n)
        cout<<num[i]<<" "<<num[j]<<endl;
 
  return 0;
}
