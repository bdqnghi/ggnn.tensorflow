int main()
{
    int n,num1,num5,num10,num20,num50,num100;
    cin>>n;                                                                             //????n 
    num100=n/100;                                                                       //100??? 
    num50=(n-num100*100)/50;                                                            //50??? 
    num20=(n-num100*100-num50*50)/20;                                                   //20??? 
    num10=(n-num100*100-num50*50-num20*20)/10;                                          //10??? 
    num5=(n-num100*100-num50*50-num20*20-num10*10)/5;                                   //5??? 
    num1=(n-num100*100-num50*50-num20*20-num10*10-num5*5)/1;                            //1??? 
    cout<<num100<<endl<<num50<<endl<<num20<<endl<<num10<<endl<<num5<<endl<<num1<<endl;  //???? 
    return 0;
}
