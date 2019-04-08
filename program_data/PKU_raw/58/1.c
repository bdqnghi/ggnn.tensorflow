
int main() {
        int n;
        cin >> n;
        cin.get();
        while (n -- > 0) {
                char s[100];
                cin.getline(s, 100);
                if (s[0] >= 'a' && s[0] <= 'z'
                        || s[0] >= 'A' && s[0] <= 'Z'
                        || s[0] == '_') {
                        int i = 0;
                        while (s[i] != '\0') {
                                if (s[i] >= 'a' && s[i] <= 'z'
                                        || s[i] >= 'A' && s[i] <= 'Z'
                                        || s[i] >= '0' && s[i] <= '9'
                                        || s[i] == '_')
                                        ;
                                else
                                        break;
                                i ++;
                        }
                        if (s[i] == '\0')
                                cout << 1 << endl;
                        else
                                cout << 0 << endl;
                }
                else {
                        cout << 0 << endl;
                }
        }
        return 0;
}
