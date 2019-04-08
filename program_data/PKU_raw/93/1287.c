int main()
{
    int x, a, b, c;
    cin >> x;    //????
    a = (x % 3 == 0 )? 1 : 0;//?x??3???a?1????0
    b = (x % 5 == 0 )? 1 : 0;//?x??5???b?1????0
    c = (x % 7 == 0 )? 1 : 0;//?x??7???c?1????0

    if(a + b + c == 3) //????357??
        cout << 3 << " " << 5 << " " << 7 <<endl;
    else
      if(a + b + c == 0)//?????357??
        cout << "n" <<endl;
      else          //??357?????????
        if(a + b == 0)
          cout << 7 << endl;
        else
            if(a + c == 0)
              cout << 5 << endl;
            else
                if(b + c == 0)
                   cout << 3 << endl;
                else
                    if(a + b == 2)
                      cout << 3 << " " << 5 << endl;
                    else
                        if(a + c == 2)
                           cout << 3 << " " << 7 << endl;
                        else
                            cout << 5 << " " << 7 << endl;
    
    return 0;


}
