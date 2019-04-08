
int a[100][100];
int total;

void slice(int);
void zero(int n)
{
    for (int i = 0; i < n; i++) {
        int min = a[i][0];
        for (int j = 0; j < n; j++) {
            if (a[i][j] < min) {
                min = a[i][j];
            }
        }
        for (int j = 0; j < n; j++) {
            a[i][j] -= min;
        }
    }
    for (int i = 0; i < n; i++) {
        int min = a[0][i];
        for (int j = 0; j < n; j++) {
            if (a[j][i] < min) {
                min = a[j][i];
            }
        }
        for (int j = 0; j < n; j++) {
            a[j][i] -= min;
        }
    }
    slice(n);
}

void slice(int n)
{
    total += a[1][1];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j > 0 && i > 0) {
                a[i][j] = a[i+1][j+1];
            } else if (j > 0) {
                a[i][j] = a[i][j+1];
            } else if (i > 0) {
                a[i][j] = a[i+1][j];
            }
        }
    }
    n--;
    if (n == 1) {
        return;
    }
    zero(n);
}

int main(int argc, const char * argv[])
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        memset(a, 0, 100*100*sizeof(int));
        total = 0;
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                cin >> a[j][k];
            }
        }
        zero(n);
        cout << total << endl;
    }
}

