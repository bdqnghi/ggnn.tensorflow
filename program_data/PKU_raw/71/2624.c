

int main()
{
    int n;
    int year;
    int month1,month2;
    int pingnian[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int runnian[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
    int buffer;

    cin >> n;

    for (int i = 0; i< n; i++) {
        cin >> year >> month1 >> month2;
        if (month1 > month2) {
            buffer = month1;
            month1 = month2;
            month2 = buffer;
        }

        buffer = 0;
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            for (int j = month1; j < month2; j++)
                buffer = buffer + runnian[j - 1];
            if (buffer % 7 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }

        else {
            for (int j = month1; j < month2; j++)
                buffer = buffer + pingnian[j - 1];
            if (buffer % 7 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }

    }
    return 0;
}
