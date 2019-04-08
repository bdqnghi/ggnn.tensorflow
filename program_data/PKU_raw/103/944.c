int main()
{
    char str[200];
    cin >> str;
    int len = strlen(str);
    int i,j=0;
    for (i = 0;i < len; i++)
    {
        if (str[i] >='a' && str[i] <= 'z' )
        {
                   str[i] = str[i] - ('a' - 'A');
        }
    }
    char letter[200]={' '};
    int length[200];
    for (i=0;i<=199;i++)
    {
        length[i]=1;
    }
    letter[0] = str[0];
    for (i = 1;i < len; i++)
    {
        if (str[i] == str[i-1] )
        {
            length[j]++;
        }
        else
        {
            j++;
            letter[j]= str[i];
        }
    }
    int kinds = j;
                     
    for(i=0;i<=j;i++)
    {
        cout << "(" << letter[i] << "," << length[i] << ")" ;
    }
    cout << endl;    return 0;
}