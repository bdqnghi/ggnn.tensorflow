
int main()
{
    int n, i, j;
    float height[40], hmale[40], hfemale[40];
    char sex[40][7];
    cin >> n;
    cin.get();
    for(i = 0; i < n; i++)
    {
        cin >> sex[i];
        cin >> height[i];
        cin.get();
    }
    int k = 0, m = 0;
    float t;
    for(i = 0; i < n; i++)
    {
        if(sex[i][0] == 'm')
        {
            hmale[m] = height[i];
            m++;
        }
        else
        {
            hfemale[k] = height[i];
            k++;
        }
    }
    for(i = 0; i < m - 1; i++)
        for(j = 0; j < m - 1 - i; j++)
    {
        if(hmale[j] > hmale[j + 1])
        {
            t = hmale[j + 1];
            hmale[j + 1] = hmale[j];
            hmale[j] = t;
        }

    }
    for(i = 0; i < k - 1; i++)
        for(j = 0; j < k - 1 - i; j++)
    {

        if(hfemale[j] < hfemale[j + 1])
        {
            t = hfemale[j + 1];
            hfemale[j + 1] = hfemale[j];
            hfemale[j] = t;
        }
    }
    for(i = 0; i < m; i++)
        printf("%.2f ", hmale[i]);
    for(i = 0; i < k - 1; i++)
        printf("%.2f ", hfemale[i]);
    printf("%.2f", hfemale[k - 1]);
    return 0;
}
