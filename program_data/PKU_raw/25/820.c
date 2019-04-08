int longInt[100];
int main()
{
 int size = 1;//??
 int c;//??
 int n;//n??
 int i;
    cin>>n;
 longInt[0] = 1;
 for(i = 0; i < n; i++)
 {
  c = 0;
  for(int j = 0; j < size; j++)
  {
   longInt[j] = longInt[j]*2 + c;
   c = longInt[j]/1000;
   if(longInt[j] >= 1000)
   {
    
    longInt[j] = longInt[j]%1000;
    if(j == size-1)
    {
     size ++;
    }
   }
  }
 }
 for(i = size - 1; i > -1; i--)
 {
  if(i != size-1)
  {
   cout<<setw(3)<<setfill('0');
  }
  cout<<longInt[i];
  
 }
 cout<<endl;

 return 0;
}