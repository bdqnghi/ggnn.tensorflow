

int main(int argc, char *argv[])
{
    long a, original;
    cin >> a;
    original = a;
    int dig1, dig2, dig3, dig4, dig5;
    int NumofDig;
    dig1 = a/10000;
    a = a - 10000*dig1;
    dig2 = a/1000;
    a = a - 1000*dig2;
    dig3 = a/100;
    a = a - 100*dig3;
    dig4 = a/10;
    a = a - 10*dig4;
    dig5 = a;
    if(dig1)
    NumofDig = 5;
    else
        {
        if(dig2)
        NumofDig = 4;
        else
            {
            if(dig3)
            NumofDig = 3;
            else
                {
                if(dig4)
                NumofDig = 2;
                else
                NumofDig = 1;
                }
            }
        }
    long Oppo;
    Oppo = dig5*10000 + dig4*1000 +dig3*100 +dig2*10 +dig1;
    switch(NumofDig)
    {
        case 5 :
             cout << "00001" <<endl;
             break;
        case 4 :
             cout << dig5 << dig4 << dig3 << dig2 <<endl;
             break;
        case 3 :
             cout << dig5 << dig4 << dig3 <<endl;
             break;
        case 2 :
             cout << dig5 << dig4 <<endl;
             break;       
        case 1 :
             cout << dig5 <<endl;
             break; 
    }
      
  return EXIT_SUCCESS;
}