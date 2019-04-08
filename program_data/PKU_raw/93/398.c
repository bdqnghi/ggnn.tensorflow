int main()
{
    int a,Na,Nb,Nc;
    cin>>a;
    Na=a%3;
    Nb=a%5;
    Nc=a%7;
    if(Na==0&&Nb==0&&Nc==0)
      cout<<"3 5 7";
    else
      if(Na==0&&Nb==0)
         cout<<"3 5";
      else
         if(Na==0&&Nc==0)
            cout<<"3 7";
         else
             if(Nb==0&&Nc==0)
                cout<<"5 7";
             else
               if(Na==0)
                 cout<<"3";
               else
                 if(Nb==0)
                    cout<<"5";
                 else
                   if(Nc==0)
                     cout<<"7";
                   else
                     cout<<"n";
     return 0;
}