
int data[1000];
int comma;

int main(int argc, const char * argv[])
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> data[i];
    }
    sort(data, data + n);
    for (int i = 0; i < n; i++) {
        if (data[i] / 2 * 2 != data[i]) {
            if (comma) {
                cout << ",";
            }
            comma = true;
            cout << data[i];
        }
    }
}
