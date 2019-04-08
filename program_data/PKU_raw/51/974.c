int main()
{
    int n, i, j, k = 0;
    cin >> n;
    char data[505], substr[505][n + 1];
    cin >> data;
    int len = strlen(data);
    for (i = 0; i <= len - n; i++) {
        for (j = 0; j < n; j++) {
            substr[k][j] = data[i + j];
        }
        substr[k][n] = '\0';
        k++;
    }

    int count[len - n + 1];
    for (i = 0; i <= len - n; i++) count[i] = 0;

    for (i = 0; i <= len - n; i++) {
        for (j = i; j <= len - n; j++) {
            if (strcmp(substr[i],substr[j]) == 0) count[i]++;
        }
    }

    int max = count[0];
    for (i = 0; i <= len - n; i++) {
        if (count[i] > max) max = count[i];
    }
    if (max == 1) {cout << "NO" << endl; return 0;}
    cout << max << endl;
    for (i = 0; i <= len - n; i++) {
        if (count[i] == max) cout << substr[i] << endl;
    }

    return 0;
}
