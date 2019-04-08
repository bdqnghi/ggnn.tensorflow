int reverse(int num)
{

    return num%10;

}
int main()
{
    int number;
    while(cin>>number)
    {
        if(number>0)
    {
        while(reverse(number)==0)number=number/10;
        while(number!=0)
       {
           cout<<reverse(number);
           number=number/10;
       }
       cout<<endl;
    }
    else if(number<0)
    {
        cout<<'-';
        number=0-number;
        while(reverse(number)==0)number=number/10;
        while(number!=0)
       {
        cout<<reverse(number);
        number=number/10;
       }
      cout<<endl;
    }
    else if(number ==0)cout<<0<<endl;
    }

    return 0;

}
