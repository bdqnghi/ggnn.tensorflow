                      
int main()
{
    int a;
    int r=0;
    
    cin>>a;
    
    if(a%3==0)
    r=r+3;     
    
    if(a%5==0)
    r=r+5;
    
    if(a%7==0)
    r=r+7;           
    
    if(r==3|r==5|r==7)
    cout<<r<<endl;
    
    if(r==8)
    cout<<"3 5"<<endl;
    
    if(r==10)
    cout<<"3 7"<<endl;
    
    if(r==12)
    cout<<"5 7"<<endl;
    
    if(r==15)
    cout<<"3 5 7"<<endl;
    
    if((a%3)*(a%5)*(a%7)!=0)
    cout<<"n"<<endl;
    

    
    return 0;
}
