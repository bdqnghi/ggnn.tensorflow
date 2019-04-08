
int main() {
    int a;
    while (!cin.eof()) {
        while (!cin.eof() && !isdigit(cin.peek())) // not digit
            cin.get(); // ignore
        if (cin >> a) // digit, not eof
            cout << a << endl;
    }
    return 0;
}
