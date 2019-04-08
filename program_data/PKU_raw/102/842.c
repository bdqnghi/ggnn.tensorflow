//*************************
//*  ??????? 
//*  ????? 
//*  ???1200012941 
//*  ???2012?9?24? 
//*************************
int main()
{
    int i, j, n, s = 0, r = 0;
    char sex[10];
    double height;
    double male[40] = {0};
    double female[40] = {0};
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> sex >> height;
        if (strcmp(sex, "male") == 0)
        {
            male[s++] = height;
        }
        else
        {
            female[r++] = height;
        }
    }
    double temp;
    for (i = 0; i < s - 1; i++)
     for (j = 0; j < s - 1 - i; j++)
     {
         if (male[j] > male[j+1])
         {
             temp = male[j];
             male[j] = male[j+1];
             male[j+1] = temp;
         }
     }
    for (i = 0; i < s; i++)
    {
        cout << fixed << setprecision(2) << male[i] << " ";
    }
    for (i = 0; i < r - 1; i++)
     for (j = 0; j < r - 1 - i; j++)
     {
         if (female[j] < female[j+1])
         {
             temp = female[j];
             female[j] = female[j+1];
             female[j+1] = temp;
         }
     }
    for (i = 0; i < r - 1; i++)
    {
         cout << fixed << setprecision(2) << female[i] << " "; 
    }
    cout << fixed << setprecision(2) << female[r-1] << endl;
    return 0;
}
