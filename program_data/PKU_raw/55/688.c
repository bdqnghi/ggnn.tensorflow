

int main() {
        int a;
        char n[200];
        int b;
        cin >> a >> n >> b;
        int v = 0;
        int i = 0;
        for (i = 0; n[i]; i ++) {
                v *= a;
                n[i] = tolower(n[i]);
                if (n[i] >= '0' && n[i] <= '9') {
                        v += n[i] - '0';
                }
                else if (n[i] >= 'A' && n[i] <= 'Z') {
                        v += 10 + n[i] - 'A';
                }
                else if (n[i] >= 'a' && n[i] <= 'z') {
                        v += 10 + n[i] - 'a';
                }
        }
        if (v == 0)
                cout << 0 << endl;
        else {
                char r[200];
                i = 0;
                while (v != 0) {
                        if (v % b < 10)
                                r[i ++] = v % b + '0';
                        else
                                r[i ++] = v % b + 'A' - 10;
                        v /= b;
                }
                while (i > 0) {
                        cout << r[-- i];
                }
                cout << endl;
        }

        return 0;


}
