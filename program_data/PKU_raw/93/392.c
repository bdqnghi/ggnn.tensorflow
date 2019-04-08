int main()
{
    int shu;//?????? 
    cin>>shu;
    if (shu%3==0&&shu%5==0&&shu%7==0) cout<<"3 5 7";
    else 
    {
         if (shu%3==0&&shu%5==0) cout<<"3 5";
         if (shu%5==0&&shu%7==0) cout<<"5 7";
         if (shu%3==0&&shu%7==0) cout<<"3 7";
         }
         if (shu%3==0&&shu%5!=0&&shu%7!=0) cout<<"3";
         if (shu%3!=0&&shu%5==0&&shu&7!=0) cout<<"5";
         if (shu%3!=0&&shu%5!=0&&shu%7==0) cout<<"7";
         if (shu%3!=0&&shu%5!=0&&shu%7!=0) cout<<"n";
         return 0;
         }