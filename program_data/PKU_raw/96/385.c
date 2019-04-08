//*******************************
//*???? ??13              *
//*?  ????  1100062709     *
//*?  ??2011.11.5            *
//*******************************
int main()
{
        int  r = 0, j;
        char str[101];
        cin >> str;
        unsigned num[101];
        for (j = 0; str[j] != '\0'; j++)
        {
            num[j] = (r * 10 + str[j] - '0') / 13;
            r = (r * 10 + str[j] - '0') % 13;
        }
        j = 0;
        while (num[j] == 0)
              j++;
        if(str[j]=='\0') cout<<"0";
        for (;  str[j] != '\0'; j++)
            cout  << num[j];
        cout << endl;
        cout << r << endl;
        cin>>r;
    return 0;
} 
         
