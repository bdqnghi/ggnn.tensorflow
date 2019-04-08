
int main ()
{
    int m;
    cin >> m;
    char writter[27];
    int data[26][1000];
    memset(data,0,sizeof(data));
    int max = 0;
    char max_name;
    for (int i = 1; i <= m; i++){
        int number;
        cin >> number >> writter;
        for (int j = 0; j < strlen(writter); j++){
            data[writter[j]-65][0]++;
            data[writter[j]-65][data[writter[j]-65][0]] = number;
            if (max < data[writter[j]-65][0]){
                max = data[writter[j]-65][0];
                max_name = writter[j];
            }
        }
    }
    cout << max_name << endl << max << endl;
    for (int i = 1; i <= max; i++)
        cout << data[max_name - 65][i] << endl;
    return 0;
}