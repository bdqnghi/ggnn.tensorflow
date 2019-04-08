//?? 
int main()
{
    int num[16];    //???????????? 
    int i, k, n;   //i,k????  n????? 
    while (1)      //?while?????break???-1 
    {
        memset(num, 0, sizeof(num));
        i=0;
        k=0;
        n=0;    //????? 
        for (i = 1; ; i++)
        {
            cin >> num[i];
            if (num[i] == 0) break;
            for (k = 1; k <= i; k++)
            {
                if ((num[k] / num[i]==2 && num[k] % num[i] == 0) || 
                    (num[i] / num[k]==2 && num[i] % num[k] == 0))  n++;   //???? 
            }
        }
        if (num[1] == -1) break;
        cout << n << endl;
    }
    return 0;
}    
        