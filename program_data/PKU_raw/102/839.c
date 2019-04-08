
int main ()
{
    char gender[10];
    float high_male[40], high_female[40];
    int counter_male = 0, counter_female = 0, n;
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> gender;
        switch (gender[0]){
            case 'f' : {
                cin >> high_female[counter_female];
                counter_female++;
                break;
            }
            case 'm' : {
                cin >> high_male[counter_male];
                counter_male++;
                break;
            }
        }
    }
    for (int i = 1; i <= counter_male; i++)
        for (int j = 0; j < counter_male-i; j++)
            if (high_male[j] > high_male[j+1]){
                float temp = high_male[j];
                high_male[j] = high_male[j+1];
                high_male[j+1] = temp;
            }
    for (int i = 1; i <= counter_female; i++)
        for (int j = 0; j < counter_female-i; j++)
            if (high_female[j] < high_female[j+1]){
                float temp = high_female[j];
                high_female[j] = high_female[j+1];
                high_female[j+1] = temp;
            }
    for (int i = 0; i < counter_male; i++) cout << fixed << setprecision(2) << high_male[i] << " ";
    for (int i = 0; i < counter_female-1; i++) cout << high_female[i] << " ";
    cout << high_female[counter_female-1];
    return 0;
}