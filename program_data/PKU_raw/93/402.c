int main()
{
    int number;
    cin>>number;
    if(number%3==0&&number%5==0&&number%7==0)
    cout<<"3 5 7"<<endl;
    if(number%3==0&&number%5==0&&number%7!=0)
    cout<<"3 5"<<endl;
    
    if(number%3==0&&number%5!=0&&number%7==0)
    cout<<"3 7"<<endl;
    
    if(number%3!=0&&number%5==0&&number%7==0)
    cout<<"5 7"<<endl;
    
    if(number%3==0&&number%5!=0&&number%7!=0)
    cout<<"3"<<endl;
    
    if(number%3!=0&&number%5==0&&number%7!=0)
    cout<<"5"<<endl;
    
    if(number%3!=0&&number%5!=0&&number%7==0)
    cout<<"7"<<endl;
    
    if(number%3!=0&&number%5!=0&&number%7!=0)
    cout<<"n"<<endl;
    cin.get();cin.get();cin.get();
    return 0;
    }
