
int main()
{
     int n;
     cin>>n;
     cout<<n/100<<endl;
     cout<<(n%100)/50<<endl;
     cout<<(n%50)/20<<endl;
     cout<<(n%50-(n%50)/20*20)/10<<endl;
     cout<<(n%10)/5<<endl;
     cout<<n%5<<endl;
     return 0;
}
