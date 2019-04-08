//*****************************
//*????????           *
//*?  ????  1100062709   *
//*???2011 .11 .15         *
//*****************************
int f (int number)                                                  //?????
{ 
    int n;
    if (number == 1)                                                //????????1 ???????? 
    {
            cout << "End" << endl;                                 //??end 
            return 0;
    }
    else
    {
        if(number % 2 == 0)                                         //????????
        {
               n = number / 2;                        
               cout << number << "/2" << "=" << n << endl;          //??????????????
               number = n;                                          //?n???number 
        }
        else
        {
            n = 3 * number + 1;                                     //???????? 
            cout << number<< "*3+1=" << n << endl;                  //???????????? 
            number = n;               
        }
        return f(number);                                           //??????
    }
}
int main()                                                          //????? 
{
    int number;              
    cin >> number;                                                  //?????
    f(number);                                                      //??????
    return 0;                                                       //????? 
}
