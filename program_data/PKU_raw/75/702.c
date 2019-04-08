//********************************
//*???5.cpp   **
//*????????   **
//*?????? 1300012838 **
//*???2013.10.30  **
//********************************

int main()
{ 
    int time[1000], in[1000], out[1000], num = 1, max = 0;
    for (int i = 0; i < 1000; i++)
    {
        time[i] = 0;
    }
    cin >> in[0];
    while (cin.get() == ',')
    {
        cin >> in[num];
        num++;
    }
    for (int j = 0; j < num; j++)
    {
        cin >> out[j];
        for (int k = in[j]; k < out[j]; k++)
        {
            time[k]++;
        }
        cin.get();
    } 
    for (int l = 0; l < 1000; l++)
    {
        if (time[l] > max)
        {
            max = time[l];
        }
    }
    cout << num << " " << max << endl;

    return 0;                    
}  