/****************?????********************
??? 
*********************************************/
int pay(int n,int money)
{
    int num;
    num=n/money;
    cout<<num<<endl;
    num=n%money;
    return num;
}
int main()
{
    int n;
    cin>>n;//??????
    n=pay(n,100);
    n=pay(n,50);
    n=pay(n,20);
    n=pay(n,10);
    n=pay(n,5);
    n=pay(n,1);
    return 0;
}
     
