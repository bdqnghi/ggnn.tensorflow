int main() {
    char s[101][101];
    int i = 0;
    while (cin >> s[i]) {
        i++;
    }
    cout << s[i-1];
    for (i -= 2; i >= 0; i--) {
        cout << " " << s[i];
    }
    return 0;
}
