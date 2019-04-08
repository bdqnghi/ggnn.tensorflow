int main()
{
  int n;
  cin>>n;
  int p[6];
  p[0]=(n/100);
  p[1]=(n%100)/50;
  p[2]=(n%50)/20;
  p[3]=((n%50)-p[2]*20)/10;
  p[4]=(n%10)/5;
  p[5]=(n%5);
  for(int i=0;i<6;i++)
  {
   cout<<p[i]<<endl;
  }
  return 0;
}         