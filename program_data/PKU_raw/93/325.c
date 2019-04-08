int main()
{int n=0,s=0;//n???? s??n?????? 
cin>>n;
if (n%3==0){cout<<"3";s++;}
if (n%5==0){if (s!=0)cout<<' ';cout<<"5";s++;}if (n%7==0){if (s!=0)cout<<' ';cout<<"7";s++;}
if (s==0)cout<<"n";
return 0;
    }

