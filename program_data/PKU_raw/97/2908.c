int main()
{
    int money;                                  //???????
    cin>>money;
    int _100,_50,_20,_10,_5,_1;                 //??????
    
    _100=(money-money%100)/100;                 //100????? 
    money=money%100;
    cout<<_100<<'\n';
    
    _50=(money-money%50)/50;                    //50? 
    money=money%50;
    cout<<_50<<'\n';
    
    _20=(money-money%20)/20;                    //20? 
    money=money%20;
    cout<<_20<<'\n';
    
    _10=(money-money%10)/10;                    //10? 
    money=money%10;
    cout<<_10<<'\n';
    
    _5=(money-money%5)/5;                       //5? 
    money=money%5;
    cout<<_5<<'\n';
    
    _1=money;                                   //1? 
    cout<<_1;
    
    return 0;                                   //?> w <? 
}
