int main()
{
    int a, b, c, o = 0;
    for(a = 1; a <= 3 && o < 1; a++){
        for(b = 1; b <= 3 && o < 1; b++){
            if( a == b ) 
                continue;
            for(c = 1; c <=3 && o < 1; c++){
                if(a == c || b == c)
                      continue;
  //              if(a == 3 && b == 1 && c == 2)
  //                  cout<<"herererere"<<endl;
                if( (a == 3 - (b > a) - (c == a) )
                     && ( b == 3 - (a > b) - (a > c) )
                     && ( c == 3 - (c > b) - (b > a) )
                )
                    o=1;
            }
        }
    }//?????????????????????????????????? 
    a=a-1;
    b=b-1;
    c=c-1;
    //cout<<o<<endl;
    if(a>b && b>c) 
        cout << "CBA";
    if(a>c && c>b) 
        cout << "BCA";
    if(b>a && a>c) 
        cout<<"CAB";
    if(b>c && c>a) 
        cout<<"ACB";
    if(c>b && b>a) 
        cout<<"ABC";
    if(c>a && a>b) 
        cout<<"BAC";
        
    return 0;
}
