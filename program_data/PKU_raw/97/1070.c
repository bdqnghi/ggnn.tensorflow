int main()
{
    int n100=0;  //????????????? 
    int n50=0;
    int n20=0;
    int n10=0;
    int n5=0;
    int n1=0;
    int n=0;   //?????
    int p=0;  //???? 
    cin>>n;
    p=n%100; 
    n100=(n-p)/100;
    n=p%50;
    n50=(p-n)/50;
    p=n%20;
    n20=(n-p)/20;
    n=p%10;
    n10=(p-n)/10;
    p=n%5;
    n5=(n-p)/5;
    n1=p;
    cout<<n100<<endl;
    cout<<n50<<endl;
    cout<<n20<<endl;
    cout<<n10<<endl;
    cout<<n5<<endl;
    cout<<n1<<endl;
    return 0; 
    
     
}