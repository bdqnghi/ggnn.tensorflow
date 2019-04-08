//****************************************
//*??????                   **
//*??? 1100012927              **
//*2011.11.29                     **
//****************************************

int main()
{
    int n, per1 = 1, per2 = 1, knows[10000] = {0}, knowed[10000] = {0}, count = 0, i = 0;
    int *p = knows;
    int *q = knowed;
    cin >> n;
    do
    {
        cin >> per1 >> per2;
        if (per1 != 0 || per2 != 0)
        {
            *(p + per1) = 1;
            (*(q + per2))++;
        }
        else
            break;
    }while(1);
    for (i = 0; i < n; i++)
    {
        if (*(p + i) == 0 && *(q + i) == n - 1)
        {
            if(count == 0)
            {
                cout << i;
                count++;
            }
            else
            {
                cout <<' '<< i;
                count++;
            }
        }
    }
    if (count == 0)
        cout <<"NOT FOUND";
         return 0;
        
}