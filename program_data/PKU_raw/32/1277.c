
int main()
{
    int n,u,i ,Len1=0,Len2=0,max=0;
    const int MAX_LEN = 100;
    int num1[MAX_LEN+1]={0};int num2[MAX_LEN+1]={0};
    char str1[MAX_LEN + 1];char str2[MAX_LEN + 1];
    cin >> n;
    cin.get();
    for (u=0;u<n;u++)
    {
        cin.getline(str1, MAX_LEN + 1);
        cin.getline(str2, MAX_LEN + 1);
        Len1 = strlen(str1);
        Len2 = strlen(str2);
        for (i = Len1 - 1; i >= 0; i--)
        num1[Len1-1-i] =  str1[i]-'0';

        for (i = Len2 - 1;  i >= 0; i--)
        num2[Len2-1-i] =  str2[i]-'0';
        if (Len1>Len2)
        {
            max=Len1;
        }
        else
        max=Len2;


        for (i = 0; i <max; i++)
        {
             num1[i]=num1[i]- num2[i];
             if(num1[i]<0)
             {
                 num1[i]=num1[i]+10;
                 num1[i+1]=num1[i+1]-1;
             }
        }
        i = MAX_LEN;
        while (num1[i]==0)
        i--;

        for (; i >= 0; i--)
        cout << num1[i];

        cout << endl;
        for (i=0;i<MAX_LEN;i++)
        {
            num1[i]=0;
            num2[i]=0;
        }
        Len1=0;
        Len2=0;
        max=0;
        if (i!=n-1)
        cin.get();

    }
    return 0;
}
