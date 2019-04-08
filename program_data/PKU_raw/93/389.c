int main()
{
  int n,i=0;//n??????
  cin>>n;
  if(n%3==0)i++;
  if(n%5==0)i++;
  if(n%7==0)i++;
  if(i==3)cout<<"3 5 7";
  if(i==2)
    {
          if(n%3!=0)cout<<"5 7";
          if(n%5!=0)cout<<"3 7";
          if(n%7!=0)cout<<"3 5";          
          }
  if(i==1)
    {
          if(n%3==0)cout<<"3";
          if(n%5==0)cout<<"5";
          if(n%7==0)cout<<"7";          
          }
  if(i==0)cout<<"n";
  cin.get();
  cin.get();
  return 0;
}