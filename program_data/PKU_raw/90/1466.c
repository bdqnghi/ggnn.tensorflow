//int s=0;
int fen(int m,int n)
{
  if(m==0||n==1)
  {
   return 1;
  }
  if(m>=n)
  {
   return fen(m-n,n)+fen(m,n-1);
 }
  else
  {
    return fen(m,m);
  }
} 
int main()
{
  int a;
  cin >> a;
  int i=0;
  while(i<a)
  {
   int m,n;
   cin >> m >> n;
   
   //s=0;
   cout << fen(m,n) << endl;
   
   i++;
  }
  cin.get();cin.get();cin.get();
  return 0;
}
