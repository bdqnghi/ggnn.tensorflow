int main()
{
    int aaa=0;
     
    int num ;
 
    cin >> num ;
 
    if (num % 3 == 0 )
    {
            cout << 3 ;       
            aaa=3;
    }
    if (num % 5 == 0 )
    {
            if(aaa!=0)
                cout << " " ;    
            cout << 5 ;       
            aaa=5;         
    }
    if (num % 7 == 0 )
    {
            if(aaa!=0)
                cout << " " ;    
            cout << 7;     
            aaa=7;
    }
 
   if(aaa == 0)
        cout << "n" << endl ;
 
    return 0 ;
}