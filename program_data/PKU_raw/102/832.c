
int main()
{
    char gender[40][10]; 
    float maleheight[40], femaleheight[40], temp; 
    int num, i, j = 0, k = 0, male = 0, female = 0;
    cin >> num;
    for (i = 0; i < num; i++)
    {
        cin >> gender[i];
        if (gender[i][0] == 'm')
        {
            cin >> maleheight[j];
            j++;
            male++;
        }
        else
        {
            cin >> femaleheight[k];
            k++;
            female++;
        }         
    }
    for (i = 0; i < male; i++)
    {
        for (j = 0; j < male - 1 - i; j++)
        {
            if (maleheight[j] - maleheight[j + 1] > 0)
            {
                temp = maleheight[j];
                maleheight[j] = maleheight[j + 1];
                maleheight[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < female; i++)
    {
        for (j = 0; j < female - 1 - i; j++)
        {
            if (femaleheight[j] - femaleheight[j + 1] > 0)
            {
                temp = femaleheight[j];
                femaleheight[j] = femaleheight[j + 1];
                femaleheight[j + 1] = temp;
            }
        }
    }
    cout << fixed << setprecision(2);
    for (i = 0; i < male; i++)
    {
        cout << maleheight[i] << " ";
    }
    for (i = female - 1; i > 0; i--)
    {
        cout << femaleheight[i] << " ";
    }
    cout << femaleheight[0];
    
    return 0;
}
