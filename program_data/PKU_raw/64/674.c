

int main()
{
    int i, j, k, l = 0, num;
    double temp = 0;
    int pos[100][3];
    double distance[9900] = {0};
    int latter[9900], former[9900];
    cin >> num;
    for (i = 0; i < num; i++)
    {
        for(j = 0; j < 3; j++)
        {
              cin >> pos[i][j];
        }
    }
    for (i = 0; i < num; i++)
    {
        for (j = i + 1; j < num; j++)
        {
            for (k = 0; k < 3; k++)
            {
                former[l] = i;
                latter[l] = j;
                distance[l] += (pos[i][k] - pos[j][k]) * (pos[i][k] - pos[j][k]);
            }
            distance[l] = sqrt (distance[l]);
            l++;
        }
    }
    l = (num - 1) * num / 2;
    for (i = 0; i < l - 1; i++)
    {
        for (j = 0; j < l - i - 1; j++)
        {
            if (distance[j] < distance[j + 1])
            {
                temp = distance[j];
                distance[j] = distance[j + 1];
                distance[j + 1] = temp;
                temp = latter[j];
                latter[j] = latter[j + 1];
                latter[j + 1] = temp;
                temp = former[j];
                former[j] = former[j + 1];
                former[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < l; i++)
    {
        cout << "(" << pos[former[i]][0] << "," << pos[former[i]][1] 
        << "," << pos[former[i]][2] <<")-(" << pos[latter[i]][0] 
        << "," << pos[latter[i]][1] << "," << pos[latter[i]][2] 
        <<")=" << fixed << setprecision(2) << distance[i] << endl;
    }
    return 0;
}
    