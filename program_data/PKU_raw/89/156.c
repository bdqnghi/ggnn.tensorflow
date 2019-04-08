int main()
{
  int n;
  int num[10000];
  cin>>n;
  int i,j;
  for(i = 0; i < n; i++)
    num[i] = n - 1;
  while(1)
  {
    cin>>i>>j;
    if(i == 0 && j == 0)
      break;
    num[i] = -1;
    num[j] --;
  }
  for(i = 0; i < n; i++)
    if(num[i] == 0)
      cout<<i<<endl;
}