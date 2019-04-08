
int main() {
    long n;
    cin >> n;
    bitset<101> b;
    for (long i = 0; i < n; i++) {
        long x;
        cin >> x;
        if (!b.test(x)) {
            if (i) cout << ' ';
            cout << x;
            b.set(x);
        }
    }
    return 0;
}
