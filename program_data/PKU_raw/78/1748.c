

int main()
{
    char a[4] = {'z', 'q', 's', 'l'}, temp1;
    int weight[4], temp;
    for (weight[0] = 10; weight[0] <= 50; weight[0] += 10)
    {
        for (weight[1] = 10; weight[1] <= 50; weight[1] += 10)
        {
            for (weight[2] = 10; weight[2] <= 50; weight[2] += 10)
            {
                weight[3] = weight[0] + weight[1] - weight [2];
                if (weight[0] + weight[3] > weight[1] + weight[2]
                    && weight[0] + weight[2] < weight[1])
                    {
                        for (int i = 0; i < 4; i++)
                        {
                            for (int j = 0; j < 3 - i; j++)
                            {
                                if (weight[j] < weight[j + 1])
                                {
                                    temp = weight[j + 1];
                                    weight[j + 1] = weight[j];
                                    weight[j] = temp;
                                    temp1 = a[j + 1];
                                    a[j + 1] = a[j];
                                    a[j] = temp1;
                                }
                            }
                        }
                        for (int i = 0; i < 4; i++)
                        {
                            cout << a[i] << " " << weight[i] << endl;
                        }
                    }
            }
        }
    }
    return 0;
}