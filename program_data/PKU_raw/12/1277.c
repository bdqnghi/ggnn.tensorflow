//********************************
//*?????   **
//*?????? 1200012988 **
//*???2012.10.30  **
//********************************


int main()
{
    double a[16];
    while(cin >> a[0])
    {
        if(a[0] == -1)
            break;
        else
        {
            int count = 0, i = 0;
            do
            {
                i++;
                cin >> a[i];
            }while(a[i] != 0);
            for(int j = 0; j < i - 1; j++)
            {
                for(int k = j + 1; k < i; k++)
                {
                    if((a[k] / a[j] == 2) || (a[j] / a[k] == 2))
                        count++;
                }
            }
            cout << count << endl;
        }
    }

    return 0;
}
