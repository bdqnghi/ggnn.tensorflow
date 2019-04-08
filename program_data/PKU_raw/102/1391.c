
 
 
int main()
{
    char a[8];                               //?????,????
    double height;
    double female[40];
    double male[40];
    int n;
    int femalecount = 0;
    int malecount = 0;
    int i;
    cin >>n;
    for (i = 0; i < n; i++)
    {
        cin >> a;
        cin >> height;
        if (strlen(a) == 6)                          //???????6,??????
        {
            female[femalecount] = height;            //???????????
            femalecount++;
        }
        else
        {
            male[malecount] = height;               //??????,????????????
            malecount++;
        }
    }
    sort(male,male + malecount);                    //????
    sort(female,female + femalecount);              //????
    for (i = 0; i < malecount; i++)
    {
        cout << fixed << setprecision(2);
        cout << male[i] << " ";                       //???????????
    }
    for (i = femalecount - 1; i > 0; i--)
    {
        cout << female[i] << " ";                    //???????????
    }
    cout << female[0];
    return 0;
}
