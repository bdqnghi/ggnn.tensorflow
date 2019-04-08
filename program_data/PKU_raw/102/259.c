

int main()
{
    char a[40][8];
    double height;
    double female[40];
    double male[40];
    int n;
    double temp;
    int j, k;
    int femalecount = 0;
    int malecount = 0;
    int i;
    cin >>n;
    for (i = 0; i < n; i++)
    {
         cin >> a[i];
         cin >> height;
         if (a[i][0] == 'f')
         {
             female[femalecount] = height;
             femalecount++;
         }
         else
         {
             male[malecount] = height;;
             malecount++;
         }
    }
    for (j = 0; j < malecount; j++)
    {
        for ( k = 0; k < malecount - j - 1; k++)
        {
            if (male[k] > male[k + 1])
            {
                temp = male[k + 1];
                male[k + 1] = male[k];
                male[k] = temp;
            }
        }
    }
    for (j = 0; j < femalecount; j++)
    {
        for ( k = 0; k < femalecount - j - 1; k++)
        {
            if (female[k] < female[k + 1])
            {
                temp = female[k + 1];
                female[k + 1] = female[k];
                female[k] = temp;
            }
        }
    }
    for (j = 0; j < malecount; j++)
    {
        cout << fixed << setprecision(2);
        cout << male[j] << " ";
    }
    for (j = 0; j < femalecount - 1; j++)
    {
        cout << female[j] << " ";
    }
    cout << female[femalecount - 1];
    return 0;
}