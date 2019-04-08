int main()
{
    char number[100];
    char quotient[100]={' '};
    cin >> number;
    int r=0;
    int i;
    for (i=0;number[i]!='\0';i++)
    {
        quotient[i]=(r*10+(number[i]-'0'))/13+'0';
        r=(r*10+(number[i]-'0'))%13;
    }
    int len=strlen(quotient);
    if (atoi(number)<13)
    {
        cout << "0" << endl;
    }
    else
    {
    if (quotient[1]!='0')
    {
        cout << quotient[1] ;
    }
     for (i=2;i<=len-1;i++)
    {
         cout << quotient[i];
    }
    cout << '\n';
    }
    cout << r << '\n' ;

    return 0;
}
